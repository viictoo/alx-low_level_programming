#include <stdio.h>

/**
 * main:-a program that prints sum of even valued fibbonacci terms
 *
 * Return: 0(exit status success)
 */


int main(void)

{

	int fibb1 = 1, fibbnow = 2, fibbnew, sum = 2;


	while (fibbnow <= 4000000)

	{
		fibbnew = fibb1 + fibbnow;
		fibb1 = fibbnow;
		fibbnow = fibbnew;

		if (fibbnow % 2 == 0)
		{
			sum += fibbnow;
		}
	}

	printf("%d\n", sum);

	return (0);

}
