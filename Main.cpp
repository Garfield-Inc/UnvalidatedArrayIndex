#include <iostream>
#include "Entity.h"

int main()
{
	int number, value;
	std::cin >> number;
	std::cin >> value;

	setSize(number, value);
	
	fun(number, value);

	if (value >= 0 && value < 10)
		fun_ref(number, value);

	foo(number, value);

	if (number >= 0 && number < 10)
		bar(number, value);

	return 0;
}