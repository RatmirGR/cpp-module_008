#include "Span.hpp"

Span::Span(void){}

Span::Span(unsigned int n){
    this->_maxSize = n;
}

Span::Span(const Span& span){
    *this = span;
}

Span::~Span(void){}

Span& Span::operator=(const Span& other){
    if (this == &other)
        return (*this);
    this->_maxSize = other._maxSize;
    this->vector = other.vector;
    return (*this);
}

unsigned int Span::getMaxSize() const {
    return (this->_maxSize);
}

void Span::addNumber(unsigned int num){
    if (this->vector.size() >= this->_maxSize)
        throw Span::SpanFullException();
    this->vector.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator iter1, std::vector<int>::iterator iter2){
    if (this->_maxSize < this->vector.size() + (iter2 - iter1))
        throw Span::SpanFullException();
    this->vector.insert(this->vector.end(), iter1, iter2);
}

int Span::shortestSpan(){
    if (this->_maxSize < 2)
        throw Span::SpanCannotBeFoundException();
    std::sort(this->vector.begin(), this->vector.end());
    int shortSpan = this->vector[1] - this->vector[0];
    for (unsigned int i = 1; i < this->vector.size(); i++){
        if (shortSpan > (this->vector[i] - this->vector[i - 1]))
            shortSpan = this->vector[i] - this->vector[i - 1];
    }
    return (shortSpan);
}

int Span::longestSpan(){
    if (this->_maxSize < 2)
        throw Span::SpanCannotBeFoundException();
    std::sort(this->vector.begin(), this->vector.end());
    int longSpan = (this->vector.end() - 1) - (this->vector.begin());
    return (longSpan);
}

const char *Span::SpanFullException::what() const throw() {
    return "Error: Span is full";
}

const char *Span::SpanCannotBeFoundException::what() const throw() {
    return "Error: Span cannot be found";
}