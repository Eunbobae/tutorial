//add
#include <stdio.h>
int add(int a, int b);

int main(void)
{
	int a;
	int b;
	int c;

	a = 5;
	b = 10;
	c = add(a, b);

	
	printf("hello, world!\n");
	

	return 0;
}
int add(int a, int b)
{
	return a + b;
}