#include "Entity.h"

void Entity::setSize(int num, int size)
{
	int local_array[10];
	local_array[num] = size;
}

void Entity::fun(int p, int q)
{
	m_array[p] = q;
}

void Entity::fun_ref(int& a, int& b)
{
	m_array[a] = b;
}

void Entity::foo(int x, int y)
{
	if (x >= 0 && x < 10)
		m_array[x] = y;
}

void Entity::bar(int m, int n)
{
	if (n >= 0 && n < 10)
		m_array[m] = n;		
}
