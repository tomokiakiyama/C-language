#include<stdio.h>
int a;

/*func関数*/
void func(void)
{
	a++;
	printf("func関数　%d\n", a);
}

/*main関数*/
void main(void)
{
	func();
	a++;
	printf("main関数　%d\n", a);
	func();

}