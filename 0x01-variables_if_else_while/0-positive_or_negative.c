#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * discription: 'check for number if it is postive or negative'
 * Return: always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is postive\n", n);
}
else  if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
