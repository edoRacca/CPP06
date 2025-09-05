
#include "ScalarConverter.hpp"


int main(int ac, char **av)
{
	(void)ac;
	if (av[1])
		ScalarConverter::convert(av[1]);
	return (0);
}