#include <stdio.h>
//name=shashvat kawali
//uin=251P023
//class=comp
//division=c
int Prime(int num) {
    if (num <= 1) 
    return 0;
    for (int i = 2; i * i <= num; i++) {
    if (num % i == 0)
    return 0;
    }
    return 1;
}
int main() {
    int start, end;
    printf("Enter two numbers (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are:", start, end);
    for (int i = start; i <= end; i++) {
    if (Prime(i)) {
    printf("%d ", i);
     }
    }
    return 0;
}
