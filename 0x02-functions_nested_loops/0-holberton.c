#include "main.h"

/**
 * main - Entry Point
 *
 * Description: program prints _putchar followed by a new line
 * Return:return 0
 */

int main(void)
{
char *msg = "_putchar\n";

while (*msg != '\0')
_putchar(*msg++);

return (0);
}
