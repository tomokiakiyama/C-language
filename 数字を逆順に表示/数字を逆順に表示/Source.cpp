#include<stdio.h>
int main(void)
{
	int a, b, c, d;

	printf("非負の整数を入力\n");
	scanf_s("%d", &a);

	for (b = 10, d = 0, c = a; c > 0; b = b * 10)
	{
		c = (a / b)*b;
		printf("%d",( a - c - d)/(b/10));

		d = a-c;
	}

	return 0;
}