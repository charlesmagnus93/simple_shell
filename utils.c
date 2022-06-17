#include "main.h"

/**
 * _putchar - prints a character
 * @c: the character
 *
 * Return: return value
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
