#include <stdio.h>
//
int stringLength (char str[]) {

int len = 0;

while (str[len] != '\0')

len++;

return len;

}

int main() {

char str[100];

printf("Enter a string: ");

gets(str); // or use fgets(str, 100, stdin);

printf("Length of string: %d\n", stringLength(str));

return 0;

}
