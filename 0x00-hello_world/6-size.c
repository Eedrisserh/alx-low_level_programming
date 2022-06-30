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

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s) \n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
