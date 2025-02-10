#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    
}
PmergeMe::~PmergeMe()
{
    
}
void PmergeMe::addArgs(int argc,char *argv[])
{
    for(int i = 1; i < argc; ++i)
    {
        int value = std::atoi(argv[i]);
        if(value <= 0)
            throw std::invalid_argument("Error");
        if(!(std::find(_vectorContainer.begin(),_vectorContainer.end(),value) != _vectorContainer.end()))
        {
            _vectorContainer.push_back(value);
            _dequeContainer.push_back(value);
        }
        
    }
}

void PmergeMe::sortAndPrint() {
    std::cout << "Before: ";
    printContainer(_vectorContainer);

    clock_t start_time = clock();
    mergeInsertionSort(_vectorContainer);   
    clock_t end_time = clock();

    double vector_time = double(end_time - start_time) / CLOCKS_PER_SEC * 100;

    std::cout << "After:  ";
    printContainer(_vectorContainer);

    std::cout << "Time to process a range of " << _vectorContainer.size() 
              << " elements with std::vector : " << vector_time << " us" << std::endl;

    start_time = clock();
    mergeInsertionSort(_dequeContainer);
    end_time = clock();
    
    double deque_time = double(end_time - start_time) / CLOCKS_PER_SEC * 100;

    std::cout << "Time to process a range of " << _dequeContainer.size() 
              << " elements with std::deque : " << deque_time << " us" << std::endl;
}

template <typename Container>
void PmergeMe::printContainer(const Container& container) {
    for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <typename Container>
void insertionSort(Container &container)
{
    for (typename Container::iterator it = container.begin(); it != container.end(); ++it)
    {
        typename Container::value_type current = *it;
        typename Container::iterator itPrev = it;
        while (itPrev != container.begin() && *(itPrev - 1) > current)
        {
            *itPrev = *(itPrev - 1);
            --itPrev;
        }
        *itPrev = current;
    }
    
}
template <typename Container>
void PmergeMe::mergeInsertionSort(Container &container)
{
    if (container.size() <= 1)
        return;
    else if (container.size() <= 64)
    {
        insertionSort(container);
        return;
    }
    typename Container::iterator mid = container.begin() + container.size() / 2;
    Container left(container.begin(), mid);
    Container right(mid, container.end());

    mergeInsertionSort(left);
    mergeInsertionSort(right);

    typename Container::iterator it = container.begin();
    typename Container::iterator itLeft = left.begin();
    typename Container::iterator itRight = right.begin();

    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft < *itRight)
        {
            *it = *itLeft;
            ++itLeft;
        }
        else
        {
            *it = *itRight;
            ++itRight;
        }
        ++it;
    }

    while (itLeft != left.end())
    {
        *it = *itLeft;
        ++itLeft;
        ++it;
    }

    while (itRight != right.end())
    {
        *it = *itRight;
        ++itRight;
        ++it;
    }
}