#include "ScalarConverter.hpp"
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cctype>

ScalarConverter::~ScalarConverter(){}
void printer(const std::string& str)
{
  std::cout << str << std::endl;
}
std::string toString(int value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

int controller(const std::string& str)
{
  bool hasDot = false;
  for (unsigned int i = 0; i < str.length(); i++) {
      if (str[i] == '-' || str[i] == '+') {
          if (i > 0 && (str[i-1] != 'e' && str[i-1] != 'E')) {
              printer("char: impossible");
              printer("int: impossible");
              printer("float: impossible");
              printer("double: impossible");
              return 1;
          }
      } else if (str[i] == '.') {
          if (hasDot) {
              printer("char: impossible");
              printer("int: impossible");
              printer("float: impossible");
              printer("double: impossible");
              return 1;
          }
          hasDot = true;
      } else if (!isdigit(str[i]) && str[i] != 'f') {
          printer("char: impossible");
          printer("int: impossible");
          printer("float: impossible");
          printer("double: impossible");
          return 1;
      }
  }
 return 0;
}

void ScalarConverter::convert(const std::string& str)
{
  
  if(isdigit(str[0]) && !isalpha(str[0]) && str.length() > 1)
  {
    if (controller(str)) {
        return;
    }
  }
  char *end;
  // Char
  if(str.length() == 1 && !isdigit(str[0]))
    printer("char: " + str);
  else
  {
    std::istringstream istr(str);
    int i;
    if(istr >>i)
    {
      if(i >= 32 && i <=126)
        printer("char: " + std::string(1, static_cast<char>(i)));
      else
        printer("char: Non displayable");
    }
    else
    {
      printer("char: impossible");
    }
  }

  //int
  float x = std::strtof(str.c_str(), &end);
  if(isalpha(str[0]) && str.length() == 1 )
  {
    int asciX= static_cast<int>(str[0]);
    printer("int: " + toString(asciX));
  }
  else if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0')) {
      if (x >= -2147483648 && x <= 2147483647) {
          std::cout << "int: " << static_cast<int>(x) << std::endl;
      } else {
          printer("int: impossible");
      }
  } else {
      printer("int: impossible");
  }

  //float
  std::string lowStr = "";
  for (size_t i = 0; i < str.length(); i++) {
      lowStr += std::tolower(str[i]);
  }

  if (lowStr == "inf" || lowStr == "-inf" || lowStr == "+inf" 
      || lowStr == "nan" || lowStr == "-nan" || lowStr == "+nan") {
      printer("float: " + str + "f");
      printer("double: " + str);
      return;
  }

  else
  {
    float f = std::strtof(str.c_str(), &end);
    if(isalpha(str[0]) && str.length() == 1)
    {
      int asciF= static_cast<int>(str[0]);
      printer("float: " + toString(asciF) + ".0f");
    }
    else if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0'))
    {
      if(f == static_cast<float>(f))
        std::cout << "float: " << static_cast<float>(f) << ".0f"<<std::endl;
      else
        printer("float: impossible");
    }
    else
      printer("float: impossible");
    
  }

    //double
    double d = std::strtod(str.c_str(), &end);
    if(isalpha(str[0]) && str.length() == 1)
    {
      int asciF= static_cast<int>(str[0]);
      printer("double: " + toString(asciF) + ".0");
    }
    else if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0'))
    {
      if(d == static_cast<double>(d))
        std::cout << "double: " << static_cast<double>(d) << ".0"<<std::endl;
      else
        printer("double: impossible");
    }
    else
      printer("double: impossible");
    
}
