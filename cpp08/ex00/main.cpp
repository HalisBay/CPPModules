#include "EasyFind.hpp"
#include <iostream>
void showInt(int i)
{
  std::cout << i << std::endl;
}
int main()
{
  // Vector-list
  std::list<int> lst;
  for(int i = 1; i <= 5; i++)
      lst.push_back(i);

  std::for_each(lst.begin(), lst.end(), showInt);
  std::cout << "-------------------------------------" << std::endl;
  try
  {
    std::cout << EasyFind(lst, 2) << std::endl;
    std::cout << EasyFind(lst, 6) << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  return 0;
}