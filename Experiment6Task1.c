#include <stdio.h>
//name=shashvat kawali
//uin=251P023
//class=comp
//division=c
int count=0;
void counter()
{
	//static int count=0;
	extern int count;
	count++;
	printf("number of time function is called %d \n",count);
}
int main()
{
	counter();
	counter();
	counter();
	counter();
	counter();
}
