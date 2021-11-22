#include <iostream>
#include "Entity.h"

int main()
{
	int number, value;
	std::cin >> number;
	std::cin >> value;

	setSize(number, value);

	if (number >= 0 && number < 10)
		fun(number, value);			

	if (value >= 0 && value < 10)
		fun(number, value);			

	fun_ref(number, value);
	
	foo(number, value);
	
	bar(number, value);

	return 0;
}