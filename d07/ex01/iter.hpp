#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void    iter(T *arr, int len, void (*func)(T const &elem)){

    if (!arr || !func)
        return;

    for (int i = 0; i < len; ++i) {
        func(arr[i]);
    }
}

template <typename T>
void    printMsg(T& elem){
    std::cout << "Result: " << elem << std::endl;
}

#endif
