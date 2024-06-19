#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic character
 * @c: the character to check, represented as an int
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) /* ASCII values for 'a'-'z' and 'A'-'Z' */
    {
        return (1);
    }
    return (0);
}
