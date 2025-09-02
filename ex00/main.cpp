
#include "ScalarConverter.hpp"


int main(int ac, char **av)
{
	ScalarConverter s;

	(void)ac;
	s.convert(av[1]);
	return (0);
}