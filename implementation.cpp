// The implementation of a simple stack
// By: Nick from CoffeeBeforeArch

#include "interface.h"
#include <string>

using namespace std;

void Stack::push(int d)
{
	if (is_full()) {
		cout << "Error: Stack Overflow" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		array[++top_of_stack] = d;
	}
	cout << "Push onto stack" << endl;
	print_stack();
}

void Stack::pop()
{
	if (is_empty()) {
		cout << "Error: Stack Underflow" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		array[top_of_stack--] = 0;
	}
	cout << "Pop off top of the stack" << endl;
	print_stack();
}

int Stack::peek()
{
	if (is_empty()) {
		cout << "Error: Stack is Empty" << endl;
		exit(EXIT_FAILURE);
	}
	else
		return array[top_of_stack];
}

void Stack::clear()
{
	cout << "Clearing stack..." << endl;
	while (!is_empty())
		pop();
}

bool Stack::is_empty()
{
	return top_of_stack == -1;
}

bool Stack::is_full()
{
	return top_of_stack == size - 1;
}

void Stack::print_stack()
{
	cout << "Stack contents" << endl;
	cout << "|\t\t|" << endl;
	cout << "|" << string(15, '-') << "|" << endl;
	for (int i = top_of_stack; i >= 0; --i) {
		cout << "|\t" << array[i] << "\t|" << endl;
		cout << "|" << string(15, '-') << "|" << endl;
	}
}