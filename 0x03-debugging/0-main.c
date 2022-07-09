#include <stdio.h>
#include "main.h"


void positive_or_negative(int i){
	int n;
	n = i:

	/* my if statement */
	if (n == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
/**
* main - tests function that prints if integer is positive or negative
* return: 0
*/

int main (void)
{
  int i;
  
  i = 0;
  positve_or_negative(i);
  
  return (0);
}
