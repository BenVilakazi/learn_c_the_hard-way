#include <stdio.h>
/**
 * main - main function
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
    int i;
    i = 0;

    while (i < 25)
    {
        printf("%d\n", i);
        i++;
    }
    return (0);
}