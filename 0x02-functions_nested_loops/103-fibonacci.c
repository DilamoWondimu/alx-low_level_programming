#include <stdio.h>

 /**
 * main - Fibonacci numbers for numbers not more than 40000
 * uses putchar and printf function
 * uses a and b as placeholders for the 2 previous numbers
 * Return: 0 success
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, fibsum;
float tot_sum;

while (1)
{
fibsum = fib1 + fib2;
if (fibsum > 4000000)
break;

if ((fibsum % 2) == 0)
tot_sum += fibsum;

fib1 = fib2;
fib2 = fibsum;
}
printf("%.0f\n", tot_sum);

return (0);
}
