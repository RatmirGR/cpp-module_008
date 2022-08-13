#include "easyfind.hpp"

int main( void ) {
    std::vector<int>	vector;
    std::deque<int>		deque;
    std::set<int>		set;
    std::list<int>		list;

    for (int i = 0; i < 10; i++)
    {
        vector.push_back(i);
        deque.push_front(i);
        set.insert(i);
        list.push_back(i);
    }

    std::cout << "============ Test - VECTOR ============" << std::endl;
    easyfind(vector, 5);
    easyfind(vector, 11);

    std::cout << "============ Test - DEQUE ============" << std::endl;
    easyfind(deque, 5);
    easyfind(deque, 11);

    std::cout << "============ Test - SET ============" << std::endl;
    easyfind(set, 5);
    easyfind(set, 11);

    std::cout << "============ Test - LIST ============" << std::endl;
    easyfind(list, 5);
    easyfind(list, 11);

    return 0;
}