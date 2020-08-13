#pragma once

#include <iostream>
#include <cstdlib>

class Stack {
	int *array;
	int top_of_stack;
	int size;

public:
	Stack(int s = 10)
		: size{ s }, top_of_stack{ -1 }, array{ new int[s] }
	{}

	void push(int d);
	void pop();
	int peek();
	void clear();
	void print_stack();

private:
	bool is_empty();
	bool is_full();
};

