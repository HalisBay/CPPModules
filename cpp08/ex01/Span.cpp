#include "Span.hpp"

Span::Span(unsigned int i) : _i(i), _size(0)
{
  _vector.reserve(i);
}

Span::~Span()
{
  
}
Span::Span(Span const &s) : _i(s._i), _size(s._vector.size()), _vector(s._vector)
{
  
}
Span const & Span::operator=(Span const &s)
{
  this->_i = s._i;
  this->_vector = s._vector;
  this->_size = s._vector.size();
  return *this;
}


unsigned int Span::getI() const
{
  return _i;
}

unsigned int Span::getSize() const
{
  return _size;
}

std::vector<int> Span::getVector() const
{
  return  _vector;
}

void Span::addNumber(int x)
{
  if(_vector.size() >= _i  || _size >= _i)
    throw std::out_of_range("Vector is full");
  _vector.push_back(x);
  _size++;
}

int Span::longestSpan()
{
  if(_size == 0 ||_size == 1)
      throw(std::out_of_range("Vector is empty"));
  std::vector<int>::iterator maxIt = std::max_element(_vector.begin(),_vector.end());
  std::vector<int>::iterator minIt = std::min_element(_vector.begin(),_vector.end());

  int lSpan = *maxIt - *minIt;
  return (lSpan);
}

int Span::shortestSpan()
{
  if(_size == 0 ||_size == 1)
      throw(std::out_of_range("Vector is empty"));
  std::vector<int>::iterator maxIt = std::max_element(_vector.begin(),_vector.end());

  int sSpan = *maxIt;
  std::vector<int> v = _vector;
  std::sort (v.begin(), v.end());

  for(unsigned int i = 0; i < _vector.size(); i++)
    {
      if(i && std::abs(v[i] - v[i-1]) < sSpan)
        sSpan = std::abs(v[i] - v[i-1]);
    }
  return sSpan;
}
std::ostream & operator<<( std::ostream & o, Span const & s)
{
  std::cout << "Span contents: ";
  for (unsigned int i = 0; i < s.getSize(); i++)
    std::cout << (s.getVector())[i] << " ";
  std::cout << std::endl;
  return (o);
}