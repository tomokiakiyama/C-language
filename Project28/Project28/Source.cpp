#include<stdio.h>

/*buy関数*/
void buy(int x)
{
	printf("%d万円の車を買った\n", x);
}

/*main関数*/
int main(void)
{
	buy(1000);
	buy(190389048);

	return 0;
}