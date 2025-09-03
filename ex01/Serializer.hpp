
#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include <string>

# include "Data.hpp"

typedef unsigned long uintptr_t;

class Serializer
{

private:
	
public:
	Serializer();
	virtual ~Serializer() = 0;

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};



#endif