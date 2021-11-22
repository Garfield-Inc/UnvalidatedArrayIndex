#include "Entity.h"

int global_array[10];

void setSize(int num, int size)
{
	int local_array[10];
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
	if (x >= 0 && x < 10)
		global_array[x] = y;
}

void bar(int m, int n)
{
	if (n >= 0 && n < 10)
		global_array[m] = n;
}
