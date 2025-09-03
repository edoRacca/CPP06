
#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <cstdint>
# include <iostream>
# include <string>

# include "Data.hpp"

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