#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - function of context
*
* Return: the last number of number in n.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10)  == 0)
printf("the last digit %d is %d the string and is 0\n", n, n % 10);
else if ((n % 10) >= 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
else
printf("the last digit %d is %d and is less than 6 and not 0\n", n, n % 10);
return (0);
}
