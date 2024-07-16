#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>

template <typename T>
int EasyFind(T const&t,int x)
{
  typename T::const_iterator end = t.end();
  typename T::const_iterator it = std::find(t.begin(),end,x);

  return(it == end ? throw( std::out_of_range("not found") ) : *it);
}