#include "MutantStack.tpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "MutantStack: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "MutantStack: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while(it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s1(mstack);

    std::cout << "=================================" << std::endl;

    std::list<int>  lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << "List: " << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << "List: " << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);
    std::list<int>::iterator itBList = lstack.begin();
    std::list<int>::iterator itEList = lstack.end();
    ++itBList;
    --itBList;
    while(itBList != itEList)
    {
        std::cout << *itBList << std::endl;
        ++itBList;
    }
    std::stack<int> s2(mstack);

    std::cout << "=================================" << std::endl;

    return 0;
}