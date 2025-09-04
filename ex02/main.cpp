
#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	long rand = random();
	if (rand % 3 == 0)
		return (new A());
	else if (rand % 3 == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "A pointer" << std::endl;
	else if (b)
		std::cout << "B pointer" << std::endl;
	else if (c)
		std::cout << "C pointer" << std::endl;
}

void	identify(Base& p)
{
	A a1;
	B b1;
	C c1;
	try
	{
		A& a2 = a1;
		a2 = dynamic_cast<A&>(p);
		std::cout << "A pointer" << std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		B& b2 = b1;
		b2 = dynamic_cast<B&>(p);
		std::cout << "B pointer" << std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		C& c2 = c1;
		c2 = dynamic_cast<C&>(p);
		std::cout << "C pointer" << std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
}

int main(void)
{
	srand(time(0));

	Base *rand = generate();
	identify(rand);
	identify(*rand);

	delete rand;
	return (0);
}