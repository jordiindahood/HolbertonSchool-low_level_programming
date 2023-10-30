#include "main.h"
/**
 * _strlen_recursion - check the code
 * Description: count the length of a string
 * @s : pointer to string
 * Return: Void
 */
int _strlen_recursion(char *s)
{
    int i = 0;

    if (*s)
    {
        i++;
        i = _strlen_recursion(s + 1);
    }
    return (i);
}
