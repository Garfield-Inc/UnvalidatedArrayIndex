#include <iostream>
#include "Entity.h"

int main()
{
	int n, value;
	std::cin >> n;
	std::cin >> value;

	Entity e;
	e.setSize(n, value);
	return 0;
}