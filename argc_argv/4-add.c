#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - this function print its name
 * @argc: parameter argc
 * @argv: array
 * Return: 0 for succes
 */
int main(int argc, char *argv[])
{
	int result = 0, mun, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}
	for (k = 1; k > argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
}
