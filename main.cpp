#include "interface.h"

using namespace std;

int main(int argc, char *argv[])
{
	Stack simple_stack;
	for (int i = 0; i < 5; ++i)
		simple_stack.push(i);
	for (int i = 0; i < 2; ++i)
		simple_stack.pop();
	simple_stack.clear();
	return 0;
}