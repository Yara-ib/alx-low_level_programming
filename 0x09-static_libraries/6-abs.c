#include "main.h"

/**
 * _abs - Entry point
 *
 * @x: Parameter for _abs()
 *
 * Return: Always 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
