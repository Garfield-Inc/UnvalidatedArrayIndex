#pragma once

class Entity
{
private:
	int m_array[10];
public:
	void setSize(int num, int size);
	void fun(int p, int q);
	void fun_ref(int& a, int& b);
	void foo(int x, int y);
	void bar(int m, int n);
};
