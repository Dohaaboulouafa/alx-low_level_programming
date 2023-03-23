#include "main.h"

/**
 * main - print numbers from 1 to 100
 * if number is multiple of 3 print Fizz
 * if number is multiple of 5 print Buzz
 * if number is multiple by 3 and 5 print FizzBuzz
 * each number and word to be separated by space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
