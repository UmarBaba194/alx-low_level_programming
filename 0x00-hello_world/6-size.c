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

	printf("size of a char: %lu byte(s) \n", sizeof(a));
	printf("size of a int: %lu byte(s) \n", sizeof(b));
	printf("size of a long int: %lu byte(s) \n", sizeof(c));
	printf("size of a long long : %lu byte(s) \n", sizeof(d));
	printf("size of a float: %lu byte(s) \n", sizeof(e));
	return (0);
}
