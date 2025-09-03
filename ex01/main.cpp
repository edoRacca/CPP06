
# include "Serializer.hpp"

int main(void)
{
	Data d;
	Data *p = &d;

	uintptr_t ptr = Serializer::serialize(p);
	std::cout << "p: " << p << std::endl;
	std::cout << "p serialized: " << ptr << std::endl;
	std::cout << "p deserialized: " << Serializer::deserialize(ptr) << std::endl;
	return (0);
}