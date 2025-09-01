
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& s)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	(void)s;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& s)
{
	if (this != &s)
		return (*this);
	return (*this);
}

void ScalarConverter::convert(std::string s)
{
	(void)s;
}
