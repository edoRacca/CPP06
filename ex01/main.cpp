
# include "Serializer.hpp"

int main(void)
{
	Data d;
	Data *p = &d;

	uintptr_t ptr = Serializer::serialize(p);
	std::cout << ptr << std::endl;
	std::cout << Serializer::deserialize(ptr) << std::endl;
	return (0);
}