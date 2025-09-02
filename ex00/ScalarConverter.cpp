
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& s)
{
	// std::cout << "ScalarConverter copy constructor called" << std::endl;
	(void)s;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& s)
{
	if (this != &s)
		return (*this);
	return (*this);
}

int	is_char(std::string s, int len)
{
	if (len == 1 && !(s[0] >= 48 && s[0] <= 57))
		return (1);
	return (0);
}

int is_int(std::string s, int len)
{
	int i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	while ((s[i] && len < 12) || (s[i] && (s[0] == '-' || s[0] == '+') && len < 11))
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

void print_int(std::string s)
{
	long	num = atol(s.c_str());

	if (num >= 0 && num < 32)
		std::cout << "char: Non displayable" << std::endl;
	else if (num < 0 || num > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(num) << "\'" << std::endl;
	if (num < INT_MIN || num > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << num << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void print_char(std::string s)
{
	std::cout << "char: \'" << s[0] << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(s[0]) << std::endl;
	std::cout << "double: " << static_cast<double>(s[0]) << std::endl;
}

void print_special(std::string s)
{
	if (s.compare("nan") == 0 || s.compare("nanf") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	else if (s.compare("+inf") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
	else
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
}

void ScalarConverter::convert(std::string s)
{
	if (s.compare("nan") == 0 || s.compare("nanf") == 0 || s.compare("+inf") == 0 || s.compare("-inf") == 0)
		return (print_special(s));
	else if (s.find('.') == (size_t)-1)
	{
		if (is_char(s, s.length()) == 1)
			return (print_char(s));
		else if (is_int(s, s.length()) == 1)
			return (print_int(s));
	}
}
