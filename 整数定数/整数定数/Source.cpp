#include<stdio.h>
int main(void)
{
	int a;

	printf("値を入力してください\n");

	scanf_s("%d", &a);
	printf("１０進数は%d　８進数は%o １６進数は%x\n", a, a, a);

	return 0;

}
