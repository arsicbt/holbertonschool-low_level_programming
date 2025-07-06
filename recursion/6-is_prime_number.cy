#include "main.h"

/**
 * check_prime - Checks for a divisor of n starting from i
 * @n: The number to check
 * @i: The current divisor being tested
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if n is a prime number, 0 otherwise
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
