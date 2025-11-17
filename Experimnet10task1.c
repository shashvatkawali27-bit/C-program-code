#include <stdio.h>
//name=shashvat kawali
//uin=251P023
//class=comp
//division=c
int addnumbers(int *a,int *b)
{
    int add=*a+*b;
    return add;
}
int main() {
   int num1,num2,result;
   printf("enter the first number");
   scanf("%d",&num1);
   
   printf("enter the second number");
   scanf("%d",&num2);
   
   printf("result:%d \n",addnumbers(&num1,&num2));
    return 0;
}
