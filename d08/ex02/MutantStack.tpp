#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include <iostream>
#include <string>
#include <stack>
#include <list>
#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &mutantStack)
{
    *this = mutantStack;
}
template <typename T>
MutantStack<T>::~MutantStack(void){}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &other)
{
    this->c = other.c;
    return *this;
}
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
    return this->c.begin();
}
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
    return this->c.end();
}

#endif
