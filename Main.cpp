#include <iostream>
#include "Entity.h"

int main()
{
	int number, value;
	std::cin >> number;
	std::cin >> value;

	Entity e;
	e.setSize(number, value);

	if (number >= 0 && number < 10)
		e.fun(number, value);			// Compliant

	if (value >= 0 && value < 10)
		e.fun(number, value);			// Non-compliant

	e.fun_ref(number, value);
	
	e.foo(number, value);
	
	e.bar(number, value);

	return 0;
}