#include <stdio.h>

void checkAndXor(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("%c is an alphabet\n", ch);
		char result = ch ^ 32; 
        printf("After XOR with 32: %c\n", result);
    }
    else
    {
        printf("%c is NOT an alphabet\n", ch);
    }
}

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkAndXor(ch);
    return 0;
}


