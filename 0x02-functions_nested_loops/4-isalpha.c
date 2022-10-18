#include "main.h"
/**
* _isalpha - a function that checks for alphabets 
* @c: single letter input
* Return: 1 if c is a lowercase or uppercase else 0 
*/
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
