#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void);
        MutantStack(MutantStack const &mutantStack);
        ~MutantStack(void);

        MutantStack	&operator=(MutantStack const &other);

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator    begin(void);
        iterator    end(void);
};

#endif
