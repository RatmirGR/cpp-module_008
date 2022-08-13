#ifndef CONVERTER_HPP
#define CONVERTER_HPP

# include <iostream>
# include <sstream>
# include <cmath>

#define TYPE_CHAR 0
#define TYPE_INT 1
#define TYPE_FLOAT 2
#define TYPE_DOUBLE 3
#define TYPE_LONG 4
#define TYPE_INVALID -1

#define IS_IMPOSSIBLE 0x00000001
#define NON_DISPLAYABLE 0x00000010

class Converter
{
    private:
        std::string _valueStr;
        int         _type;
        char        _valueChar;
        int         _valueInt;
        float       _valueFloat;
        double      _valueDouble;
        int         status[4];

        void                parse(void);
        void                convert(void);
        void                fromInt(void);
        void                fromFloat(void);
        void                fromDouble(void);
        void                fromChar(void);
        void                setFlag(int status, int flag);

        Converter();
    public:
        Converter(std::string const &value);
        Converter(Converter const &other);
        virtual ~Converter();

        Converter &operator=(Converter const &other);

        char                getValueChar(void) const;
        int                 getValueInt(void) const;
        float               getValueFloat(void) const;
        double              getValueDouble(void) const;
        bool                isFloatValue(void) const;
        bool                isDoubleValue(void) const;
        bool                getAtFlag(int status, int flag) const;
        std::string const   &getString(void) const;
};

std::ostream &operator<<(std::ostream &output, Converter const &pr);

#endif
