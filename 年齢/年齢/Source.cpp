#include<stdio.h>
int main(void)
{
	int num1, num2, year;

	printf("生まれた年を入力してください\n");
	scanf_s("%d", &num1);

	for (num2 = 2016, year = 0; num2 > num1; year++,--num2);

	printf("%d歳です\n", year);

	return 0;
	
}