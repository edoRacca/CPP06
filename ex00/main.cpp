
#include "ScalarConverter.hpp"


int main(int ac, char **av)
{
	ScalarConverter s;

	(void)ac;
	s.convert(av[0]);
	return (0);
}