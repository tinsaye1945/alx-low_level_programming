#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = 97;
m = 65;
while (n <= 122 )
{
putchar(n);
n++;
}
while (m <= 90 )
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}