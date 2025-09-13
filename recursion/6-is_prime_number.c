#include "main.h"

/**
 * check_prime - helper function to check if n is divisible by any number
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1); /* No divisor found */
	if (n % i == 0)
		return (0); /* Divisible → not prime */
	return (check_prime(n, i + 1)); /* Check next i */
}

/**
 * is_prime_number - returns 1 if n is a prime number, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
