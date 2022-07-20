#include "main.h"

/**
 * prime_check - checks to see if number is prime
 * @i: factor check
 * @prime: prime number
 *
 * Return: 1 if prime, 0 if not
 */

int prime_check(int i, int prime)
{
		if (prime < 2 || prime % i == 0)
			return (0);
		else if (i > prime / 2)
			return (1);
		else
			return (prime_check(i + 1, prime));
							return (prime_check(i + 1, prime));
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{

	if (n == 2)
		return (1);
	return (prime_check(2, n));

			if (n == 2)
			return (1);
	return (prime_check(2, n));
}
