#include <stdio.h>
//name=shashvat kawali
//uin=251P023
//class=comp
//division=c
int factorial(int num){
int fact=1;
for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main() {
    int num;
    printf("enter the number for which factorial is requied:-");
    scanf("%d",&num);
    
printf("the factorial is:-%d",factorial(num));
}
