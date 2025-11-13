#include <stdio.h>
//name=shashvat kawali
//uin=251P023
//class=comp
//division=c
int factorial(int num){
if(num==0 || num==1){
    return 1;
}else{
    return num*factorial(num-1);
}
}
int main() {
    int num;
    printf("enter the number for which factorial is requied:-");
    scanf("%d",&num);
    
printf("the factorial is:-%d",factorial(num));
}
