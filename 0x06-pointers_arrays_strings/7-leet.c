#include "main.h"
/**
 * leet - encode a string into 1337
 *  @s: string
 * Return: Always 0
 */
char *leet(char *s)
{
	int i, j;
	char LETTERS[] = "aAeEoOtTlL";
	char NUMBERS[] = "4433007711";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (LETTERS[j])
		{
			if (LETTERS[j] == s[i])
			{
				s[i] = NUMBERS[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
