#include "Converter.hpp"

Converter::Converter(std::string const &str): _valueStr(str), _type(TYPE_INVALID)
{
    for (int i = 0; i < 4; i++)
        this->status[i] = 0;

    this->parse();

    if (this->_type == TYPE_INVALID){
        this->setFlag(TYPE_INT, IS_IMPOSSIBLE);
        this->setFlag(TYPE_FLOAT, IS_IMPOSSIBLE);
        this->setFlag(TYPE_DOUBLE, IS_IMPOSSIBLE);
        this->setFlag(TYPE_CHAR, IS_IMPOSSIBLE);
    }else{
        this->convert();
        if (this->getAtFlag(TYPE_INT, IS_IMPOSSIBLE)
            || this->_valueInt > 127 || this->_valueInt < 0)
            this->setFlag(TYPE_CHAR, IS_IMPOSSIBLE);
        if (!std::isprint(this->_valueChar))
            this->setFlag(TYPE_CHAR, NON_DISPLAYABLE);
    }
}

Converter::Converter(Converter const &other):
        _valueStr(other._valueStr), _type(other._type),
        _valueChar(other._valueChar), _valueInt(other._valueInt),
        _valueFloat(other._valueFloat), _valueDouble(other._valueDouble)
{
    for (int i = 0; i < 4; i++)
        this->status[i] = other.status[i];
}

Converter::~Converter(){}

Converter &Converter::operator=(Converter const &other)
{
    this->_valueStr = other._valueStr;
    this->_type = other._type;
    for (int i = 0; i < 4; i++)
        this->status[i] = other.status[i];
    this->_valueChar = other._valueChar;
    this->_valueInt = other._valueInt;
    this->_valueFloat = other._valueFloat;
    this->_valueStr = other._valueStr;
    return (*this);
}

char Converter::getValueChar(void) const
{
    return (this->_valueChar);
}

int Converter::getValueInt(void) const
{
    return (this->_valueInt);
}

float Converter::getValueFloat(void) const
{
    return (this->_valueFloat);
}

double Converter::getValueDouble(void) const
{
    return (this->_valueDouble);
}

std::string const &Converter::getString(void) const
{
    return (this->_valueStr);
}

void Converter::parse(void)
{
    std::stringstream stringStream;
    size_t length = this->_valueStr.length();
    size_t i = 0;

    if (length == 1 && !std::isdigit(this->_valueStr[0]))
    {
        this->_type = TYPE_CHAR;
        this->_valueChar = this->_valueStr[0];
        return ;
    }
    if (this->_valueStr[0] == '+' || this->_valueStr[0] == '-')
        stringStream << _valueStr[i++];
    this->_type = TYPE_INT;
    for ( ; i < length; i++)
    {
        if (this->_valueStr[i] == '.' && this->_type != TYPE_DOUBLE)
        {
            this->_type = TYPE_DOUBLE;
            stringStream << _valueStr[i];
        }
        else if (this->_valueStr[i] == 'e' && i < length - 1
                 && (this->_valueStr[i + 1] == '-'
                     || this->_valueStr[i + 1] == '+'
                     || std::isdigit(this->_valueStr[i + 1])))
        {
            stringStream << _valueStr[i] << _valueStr[i + 1];
            i++;
            this->_type = TYPE_DOUBLE;
        }
        else if (this->_valueStr[i] == 'f' && i == length - 1 && this->_type == TYPE_DOUBLE)
            this->_type = TYPE_FLOAT;
        else if (!std::isdigit(this->_valueStr[i]))
        {
            this->_type = TYPE_INVALID;
            i = length;
        }
        else
            stringStream << _valueStr[i];
    }
    if (this->_type == TYPE_FLOAT)
        stringStream >> this->_valueFloat;
    else if (this->_type == TYPE_DOUBLE)
        stringStream >> this->_valueDouble;
    else if (this->_type == TYPE_INT)
    {
        long lvalue;
        stringStream >> lvalue;
        this->_valueInt = lvalue;
        if (stringStream.fail()
            || lvalue > std::numeric_limits<int>::max()
            || lvalue < std::numeric_limits<int>::min())
            this->_type = TYPE_INVALID;
    }
    else if (this->_type == TYPE_INVALID)
    {
        if (this->_valueStr == "inff" || this->_valueStr == "-inff"
        || this->_valueStr == "+inff" || this->_valueStr == "nanf")
        {
            this->_valueFloat = atof(this->_valueStr.c_str());
            this->_type = TYPE_FLOAT;
        }
        else if (this->_valueStr == "inf" ||  this->_valueStr == "-inf"
        || this->_valueStr == "+inf" || this->_valueStr == "nan")
        {
            this->_valueDouble = atof(this->_valueStr.c_str());
            this->_type = TYPE_DOUBLE;
        }
    }
}

void Converter::convert(void)
{
    switch (this->_type)
    {
        case TYPE_INT:
            this->fromInt();
            break;
        case TYPE_FLOAT:
            this->fromFloat();
            break;
        case TYPE_DOUBLE:
            this->fromDouble();
            break;
        case TYPE_CHAR:
            this->fromChar();
            break;
    }
}

void Converter::fromInt(void)
{
    this->_valueFloat = static_cast<float>(this->_valueInt);
    this->_valueDouble = static_cast<double>(this->_valueInt);
    this->_valueChar = static_cast<char>(this->_valueInt);
}

bool Converter::isFloatValue(void) const
{
    return (!(std::isnan(this->_valueFloat) || std::isinf(this->_valueFloat)));
}

bool Converter::isDoubleValue(void) const
{
    return (!(std::isnan(this->_valueDouble) || std::isinf(this->_valueDouble)));
}

void Converter::fromFloat(void)
{
    this->_valueInt = static_cast<int>(this->_valueFloat);
    this->_valueDouble = static_cast<double>(this->_valueFloat);
    this->_valueChar = static_cast<char>(this->_valueFloat);
    if (!this->isFloatValue()
        || this->_valueFloat > std::numeric_limits<int>::max()
        || this->_valueFloat < std::numeric_limits<int>::min())
        this->setFlag(TYPE_INT, IS_IMPOSSIBLE);
}

void Converter::fromDouble(void)
{
    this->_valueInt = static_cast<int>(this->_valueDouble);
    this->_valueFloat = static_cast<float>(this->_valueDouble);
    this->_valueChar = static_cast<char>(this->_valueDouble);
    if (!this->isDoubleValue()
        || this->_valueDouble > std::numeric_limits<int>::max()
        || this->_valueDouble < std::numeric_limits<int>::min())
        this->setFlag(TYPE_INT, IS_IMPOSSIBLE);
}

void Converter::fromChar(void)
{
    this->_valueInt = static_cast<int>(this->_valueChar);
    this->_valueFloat = static_cast<float>(this->_valueChar);
    this->_valueDouble = static_cast<double>(this->_valueChar);
}

void Converter::setFlag(int st, int flag)
{
    this->status[st] |= flag;
}

bool Converter::getAtFlag(int st, int flag) const
{
    return (this->status[st] & flag);
}

std::ostream &operator<<(std::ostream &output, Converter const &pr)
{
    std::stringstream stringStream;
    std::string tmp;

    if (pr.getAtFlag(0, IS_IMPOSSIBLE))
        stringStream << "char: impossible" << '\n';
    else if (pr.getAtFlag(0, NON_DISPLAYABLE))
        stringStream << "char: Non displayable" << '\n';
    else
        stringStream << "char: '" << pr.getValueChar() << "'\n";

    if (pr.getAtFlag(1, IS_IMPOSSIBLE))
        stringStream << "int: impossible" << '\n';
    else
        stringStream << "int: " << pr.getValueInt() << '\n';
    output << stringStream.str();
    stringStream.str(std::string());
    stringStream.clear();

    if (pr.getAtFlag(2, IS_IMPOSSIBLE))
        stringStream << "float: impossible" << '\n';
    else
    {
        stringStream << "float: " << pr.getValueFloat();
        tmp = stringStream.str();
        if (pr.isFloatValue() && tmp.find('.') == std::string::npos)
            stringStream << ".0";
        stringStream << "f\n";
    }
    output << stringStream.str();
    stringStream.str(std::string());
    stringStream.clear();

    if (pr.getAtFlag(3,  IS_IMPOSSIBLE))
        stringStream << "double: impossible";
    else
    {
        stringStream << "double: " << pr.getValueDouble();
        tmp = stringStream.str();
        if (pr.isDoubleValue() && tmp.find('.') == std::string::npos)
            stringStream << ".0";
    }
    output << stringStream.str() << std::endl;
    return (output);
}




