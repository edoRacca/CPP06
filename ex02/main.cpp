
#include <random>
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

void	identify(Base* p);
void	identify(Base& p);

int main(void)
{
	srand(time(0));
	return (0);
}