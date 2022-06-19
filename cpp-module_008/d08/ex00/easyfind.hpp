#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>


template <typename T>
bool easyfind(T &container, int val)
{
    bool flag;

    if (std::find(container.begin(), container.end(), val) == container.end()) {
        std::cout << "Value not found" << std::endl;
        flag = false;
    }else{
        std::cout << "Value found!" << std::endl;
        flag = true;
    }
    return (flag);
}

#endif
