
#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include <string>

# include "Data.hpp"

typedef unsigned long uintptr_t;

class Serializer
{

private:
	Serializer();
	~Serializer();
	
public:

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};



#endif