#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %1d byte(s)\n", sizeof(char));
printf("Size of an int: %1d byte(s)\n", sizeof(int));
printf("Size of a long init: %1d byte(s)\n", sizeof(long));
printf("Size of a long long init: %1d byte(s)\n", sizeof(long long));
printf("Size of a float: %1d byte(s)\n", sizeof(float));
return (0);
}
