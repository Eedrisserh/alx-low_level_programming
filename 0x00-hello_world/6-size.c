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

        printf("size of char: %lu.\n", (unsigned long)sizeof(c));
        printf("size of int: %lu.\n", (unsigned long)sizeof(i));
        printf("size of long int: %lu.\n", (unsigned long)sizeof(l));
        printf("size of long long: %lu.\n", (unsigned long)sizeof(ll));
		printf("size of float: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
