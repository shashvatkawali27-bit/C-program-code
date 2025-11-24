#include <stdio.h>
int main() {
int arr[5], i;
int *p;
printf("Enter 5 elements:\n");
for (i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
p = &arr[4];
printf("%d ", *p);
p--;
}
return 0;
}
