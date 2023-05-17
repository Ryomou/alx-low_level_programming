#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point to multiply two integers
 * @argc: argument count
 * @argv: count
 *
 * Return 0 if true 1 if false
 */

int main(int argc, char *argv[])
{
int m, n;
if (argc == 3)
{
m = atoi(argv[1]);
n = atoi(argv[2]);
printf("%d\n", m*n);
return (0);
}
printf("Error\n");
return (1);
}
