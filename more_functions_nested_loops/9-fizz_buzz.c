#include <stdio.h>

/**
 * main - imprime los números del 1 al 100
 *        pero reemplaza múltiplos de 3 y/o 5 por "Fizz", "Buzz", "FizzBuzz"
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
