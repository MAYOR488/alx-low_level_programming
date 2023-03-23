#include "main.h"
/**
  * _isalpha - Entry point
  * @c: character to be found
  * Return: 1 if alphabet is lower or uppercase 0 if otherwise
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
