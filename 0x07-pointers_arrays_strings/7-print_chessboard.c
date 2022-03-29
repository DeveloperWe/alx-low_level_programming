#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	int j, k;

	j = 0;
	while (j < 8) /*number repetitions*/
	{
		k = 0;
		while (k < 8)
		{
			_putchar (a[j][k]);
			k++;
		}
		_putchar ('\n'); /*print new line*/
		k++; /*add +1*/
	}

}
