#include <stdio.h>
#include <stdlib.h>
int addbyone(int x);
void main(void)
{
	int x = 100;
	printf("x=%d\n", x);
	int y = addbyone(x);
	system("pause");
}

int addbyone(int x)
{
	x++;
	printf("x=%d\n", x);
	return x;
}