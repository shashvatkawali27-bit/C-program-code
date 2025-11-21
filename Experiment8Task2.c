#include <stdio.h>

int isPalindrome (char str[]) {

int len = 0;

while (str[len] != '\0')

len++;

for (int i = 0; i < len / 2; i++) {

if (str[i] != str[leni-1])

return 0;

}

return 1;

}

int main() {

char str[100];

printf("Enter a string: ");

gets(str); // or use fgets(str, 100, stdin);

if (isPalindrome(str))

printf("The string is a palindrome.\n");

else

printf("The string is not a palindrome.\n");

return 0;

}
