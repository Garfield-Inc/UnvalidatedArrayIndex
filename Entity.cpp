#include "Entity.h"

int global_array[10];

void setSize(int num, int size)
{
	int local_array[10];
	if (num >= 0 && num < 10)
		local_array[num] = size;
}

void fun(int p, int q)
{
	global_array[p] = q;
}

void fun_ref(int& a, int& b)
{
	global_array[a] = b;
}

void foo(int x, int y)
{
	if (y >= 0 && y < 10)
		global_array[x] = y;
}

void bar(int m, int n)
{
	global_array[m] = n;
}
