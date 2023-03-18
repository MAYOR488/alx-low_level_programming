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

printf("Size of char is:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int is:%lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int is:%lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of long long int is:%lu bytes(s)\n", (unsigned long)sizeof(e));
printf("Size of float is:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
