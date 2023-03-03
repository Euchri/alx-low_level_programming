#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int indx1 = 0, indx2;
	char input[52] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[indx1])
	{
		for (indx2 = 0; indx2 < 52; indx2++)
		{
			if (s[indx1] == input[indx2])
			{
				s[indx1] = output[indx2];
				break;
			}
		}
		indx1++;
	}
	return (s);
}
