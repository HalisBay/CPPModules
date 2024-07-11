#if !defined(CONVERTER_HPP)
#define CONVERTER_HPP

#include <iostream>
#include <climits>

class Converter
{
private:
    std::string _str;
public:
    Converter();
    ~Converter();
    Converter(std::string str);
    Converter(Converter const & cpy);
	Converter &	operator=(Converter const & other);

    std::string getStr() const;
    bool isDisplayableChar(int c);

    operator char();
	operator int();
	operator float();
	operator double();
};  


#endif // CONVERTER_HPP

