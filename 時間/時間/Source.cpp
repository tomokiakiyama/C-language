#include<stdio.h>
int main(void)
{
	int a, b, c;
	
	printf("秒数を入力してください。\n");
	scanf_s("%d", &a);

	b = a / 60;
	c = b / 60;
	a = a % 60;
	b = b % 60;

	printf("%d時間%d分%d秒\n", c, b, a);

	return 0;
}