#include <stdio.h>
/**
 * main - Entry point
 * Description: output various size of computer types
 * Return: 0
 */
int main(void)
{

char c;
int i;
long int d;
long long int e;
float f;

printf("The size of char is:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("The size of int is:%lu byte(s)\n", (unsigned long)sizeof(i));
printf("The size of long int is:%lu bytes(s)\n", (unsigned long)sizeof(d));
printf("The size of long long int is:%lubytes(s)\n", (unsigned long)sizeof(e));
printf("The size of float is:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
