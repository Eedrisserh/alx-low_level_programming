#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
        int i;
        long int l;
        char c;
        long long ll;
        float f;

        printf("The size of Int is: %lu.\n", (unsigned long)sizeof(i));
        printf("The size of Long Int is: %lu.\n", (unsigned long)sizeof(l));
        printf("The size of Char is: %lu.\n", (unsigned long)sizeof(c));
        printf("The size of Long Long is: %lu.\n", (unsigned long)sizeof(ll));
		printf("The size of Float is: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
