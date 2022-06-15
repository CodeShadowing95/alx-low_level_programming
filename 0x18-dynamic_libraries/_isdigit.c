#include "main.h"

int _isdigit(int c)
{
	for (int i = 0; i < 10; i++)
	{
		if (c == i)
            return (1);
	}
	
	return (0);
}