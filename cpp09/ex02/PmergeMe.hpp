#if !defined(PMERGEME_HPP)
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <algorithm>
class PmergeMe
{
private:
    std::vector<int> _vectorContainer;
    std::deque<int> _dequeContainer;
    template <typename Container>
    void printContainer(const Container &container);
    template <typename Container>
    void mergeInsertionSort(Container &container);
public:
    PmergeMe();
    ~PmergeMe();
    void sortAndPrint();
    void addArgs(int argc,char *argv[]);
};

#endif // PMERGEME_HPP
