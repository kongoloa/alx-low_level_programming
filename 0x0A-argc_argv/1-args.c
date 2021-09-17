#include <stdio.h>
/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of pointer to argument strings
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
argv = argv;
printf("%d\n", argc - 1);
return (0);
}
