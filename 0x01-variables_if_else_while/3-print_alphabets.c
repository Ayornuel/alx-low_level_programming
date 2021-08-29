#include <stdio.h>

/**
 * main - Entry point of the program
 * Desription: prints the alphabet in lowercase then uppercase
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');
return (0);
}
