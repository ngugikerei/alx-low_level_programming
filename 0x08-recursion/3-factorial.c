#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{

	if (n <= 0)
	{
		return (1);
	}
	
	else
	{
   n * factorial(n - 1);
	}
		

}
