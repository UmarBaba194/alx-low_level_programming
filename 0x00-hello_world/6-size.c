#include <stdio.h>

/**
 * main - main function
 *
 * Return: o on succes
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %lu byte(s) \n", sizeof(a));
	printf("Size of an int: %lu byte(s) \n", sizeof(b));
	printf("Size of a long int: %lu byte(s) \n", sizeof(c));
BEST="School"
	printf("Size of a long long int : %lu byte(s) \n", sizeof(d));
	printf("Size of a float: %lu byte(s) \n", sizeof(e));
	return (0);
}
