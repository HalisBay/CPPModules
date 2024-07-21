#include "Converter.hpp"

Converter::Converter() : _str("Default")
{
    std::cout << "Default Constructor Called" << std::endl;
}

Converter::~Converter()
{
    std::cout << " Converter has been Slain :P" << std::endl;
}

Converter::Converter(std::string str) : _str(str)
{
    std::cout << "Parameter Constructor Called" << std::endl;
}

Converter::Converter(const Converter &cpy)
{
    *this = cpy;
}

Converter &Converter::operator=(const Converter &other)
{
    if (this != &other)
    {
        _str = other.getStr();
    }
    return *this;
}

std::string Converter::getStr() const
{
    return this->_str;
}

bool Converter::isDisplayableChar(int c)
{
    return (c >= 32 && c <= 126);
}

Converter::operator char()
{
    char c = 0;
    if (_str.length() == 1)
    {
        try
        {
            int d = atoi(_str.c_str());
            c = static_cast<char>(d);
        }
        catch (const std::invalid_argument &ia)
        {
            c = _str[0];
        }

        if (isprint(c))
            std::cout << "Char: '" << c << "'" << std::endl;
        else
            std::cout << "Char: Non displayable" << std::endl;

        return c;
    }
    else
    {
        int d = 0;
        try
        {
            d = atoi(_str.c_str());
        }
        catch (const std::invalid_argument &ia)
        {
            std::cout << "Char: ";
            std::cout << "Impossible: invalid argument" << std::endl;
            return 0;
        }
        catch (const std::out_of_range &oor)
        {
            std::cout << "Char: ";
            std::cout << "Impossible: out of range" << std::endl;
            return 0;
        }

        if (d < CHAR_MIN || d > CHAR_MAX)
        {
            std::cout << "Char: ";
            std::cout << "Impossible: out of range" << std::endl;
            return 0;
        }

        c = static_cast<char>(d);

        if (isprint(c))
            std::cout << "Char: '" << c << "'" << std::endl;
        else
            std::cout << "Char: Non displayable" << std::endl;

        return c;
    }
}

Converter::operator int()
{
    if (_str == "nan")
    {
        std::cout << "int: impossible" << std::endl;
        return 0;
    }
    int x = 0;
    try
    {
        x = atoi(_str.c_str());
        std::cout << "int: " << x << std::endl;
        return x;
    }
    catch (const std::invalid_argument &ia)
    {
        std::cout << "int: invalid argument" << std::endl;
        return 0;
    }
    catch (const std::out_of_range &oor)
    {
        std::cout << "int: out of range" << std::endl;
        return 0;
    }
}

Converter::operator float()
{
    if (_str == "nan")
    {
        std::cout << "float: nanf" << std::endl;
        return 0;
    }
    float x = 0;
    try
    {
        x = static_cast<float>(atof(_str.c_str()));
        std::cout << "float: " << x << ".0f" << std::endl;
        return x;
    }
    catch (const std::invalid_argument &ia)
    {
        std::cout << "float: invalid argument" << std::endl;
        return 0;
    }
    catch (const std::out_of_range &oor)
    {
        std::cout << "float: out of range" << std::endl;
        return 0;
    }
}

Converter::operator double()
{
    if (_str == "nan")
    {
        std::cout << "double: nan" << std::endl;
        return 0;
    }
    double x = 0;
    try
    {
        x = atof(_str.c_str());
        std::cout << "double: " << x << ".0" << std::endl;
        return x;
    }
    catch (const std::invalid_argument &ia)
    {
        std::cout << "double: invalid argument" << std::endl;
        return 0;
    }
    catch (const std::out_of_range &oor)
    {
        std::cout << "double: out of range" << std::endl;
        return 0;
    }
}

#endif // CONVERTER_HPP
