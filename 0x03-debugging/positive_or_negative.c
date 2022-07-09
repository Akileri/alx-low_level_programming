#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Assign a random number to the variable and each time it is executed
  *and print the last digit of the number store in the variable and 
  *Return: Always 0 (Success)
*/


int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
    printf("%d is positive\n", n);
if (n == 0)
    printf("%d is zero\n", n);
if (n < 0)
{
   printf("%d is negative\n", n);
}
return (0);
}
