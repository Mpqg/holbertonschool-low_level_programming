#include "main.h"
/**
 * _isupper - checks of letter is uppercase character
 * @c: value for validate
 * Return: Always 0;
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
