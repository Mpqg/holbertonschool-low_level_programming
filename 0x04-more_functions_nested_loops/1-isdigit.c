#include "main.h"
/**
 * _isdigit - checks for lowercase character
 * @c: value for validate
 * Return: Always 0;
 */
int _isdigit(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
