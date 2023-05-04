#include "main.h"
/**
 * _strcmp - compares pointers to two srtings.
 * @s1: a pointer to the first string to be compared.
 * @s2: a pointer to the second string to be compared.
 * Return: if str1 < str2, the negative difference of the first character.
 * If str1 > str2 0.
 * If str1 > str2, the postive difference of the first inmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
