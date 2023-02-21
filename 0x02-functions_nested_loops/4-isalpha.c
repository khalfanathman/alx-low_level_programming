#include "main.h"
/**
 * _isalpha - it checks for alphabetic charcter
 *
 * @c: is a character passed to the function to be checked
 *
 * Return : it returns 1 if true and 0 if false
 *
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
