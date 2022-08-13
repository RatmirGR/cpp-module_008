#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <class T>
class Array
{

    private:
        T *array;
        unsigned int _size;

    public:
        Array(void);
        Array(unsigned int size);
        Array(const Array &array);
        ~Array();

        Array &operator=(const Array &other);
        T & operator[] (const int index);

        unsigned int getSize(void) const;

        class OutOfRangeException : public std::exception{
            public:
                virtual const char *what(void) const throw();
        };
};


#endif
