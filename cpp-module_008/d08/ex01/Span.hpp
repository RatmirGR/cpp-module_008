#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <exception>
#include <algorithm>

class Span{

    private:
        std::vector<int> vector;
        unsigned int _maxSize;

    public:
        Span(void);
        Span(unsigned int n);
        Span(const Span& span);
        ~Span(void);

        Span& operator=(const Span& other);

        void    addNumber(unsigned int num);
        int     shortestSpan(void);
        int     longestSpan(void);

        void addNumber(std::vector<int>::iterator iter1, std::vector<int>::iterator iter2);

        class SpanFullException : public std::exception {
            public:
                virtual const char*	what( void ) const throw();
        };

        class SpanCannotBeFoundException : public std::exception {
            public:
                virtual const char*	what( void ) const throw();
        };

        unsigned int getMaxSize() const;

};

#endif
