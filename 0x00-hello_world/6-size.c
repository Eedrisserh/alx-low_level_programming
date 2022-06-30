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

	fprintf(stderr, "Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	fprintf(stderr, "Size of an int: %lu byte(s) \n", (unsigned long)sizeof(i));
	fprintf(stderr, "Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	fprintf(stderr, "Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf(stderr, "Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
