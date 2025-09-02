
#ifndef SCALAR_H
# define SCALAR_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <climits>
# include <limits>
# include <iomanip>

class ScalarConverter
{

private:
	

public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& s);
	~ScalarConverter();

	ScalarConverter& operator=(const ScalarConverter& s);

	static void convert(std::string s);
};


#endif