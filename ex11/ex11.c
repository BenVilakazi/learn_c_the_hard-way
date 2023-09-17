#include <stdio.h>
/**
 * main - function
 * @argv: argumant vector
 * @argc: argumant count
 * Reurn: 0 on success
*/
int main(int argc, char *argv[])
{
    int num[4] = { 0 };
    char name[4] = { 'a' };

    printf("num: %d %d %d %d\n",
    num[0], num[1], num[2], num[3]);

    printf("name each: %c %c %c %c\n", name[0],
    name[1], name[2], name[3]);

    printf("name: %s\n", name);

    //setup the numbers
    name[0] = 'B';
    name[1] = 'e';
    name[2] = 'n';
    name[3] = '\0';

    // then print out initialized 
    printf("num: %d %d %d %d\n",
    num[0], num[1], num[2], num[3]);

    printf("name each: %c %c %c %c\n", name[0],
    name[1], name[2], name[3]);

    // print the name as a string

    printf("name: %s\n", name);

    // another way to print name
    char *another = "Ben";

    printf("another: %s\n, another");
    printf("another each: %c %c %c %c\n",
    another[0], another[1], another[2], another[3]);

    return (0);
}