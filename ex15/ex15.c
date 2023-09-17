#include <stdio.h>

int main(int argc, char *argv[])
{
    //create 2 arrays
    int ages[] = { 23, 46, 20, 38, 21 };
    char *names[] = {
        "Alan", "Irving", "Kyrie", "Iverson", "Jordan"
    };

    //safely get the sizes of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    //first way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i],ages[i]);
    }

    printf("----\n");

    // set up pointers to the start of the arr
    int *cur_age = ages;
    char **cur_name = names;

    // second way of using pointers
    for (i = 0; i < count; i++)
    {
        printf("%s is %d years old. \n", *(cur_name + i), *(cur_age + i));
    }

    printf("----\n");

    // third way pointers are just arrays
    for (i = 0; i < count; i++) 
    {
        printf(" %s is %d years old again.\n", cur_name[i], cur_age[i]);
    }
    printf("----\n");

    // fourth way with pointers in a stupid complex way
    for (cur_name = names, cur_age = ages;
    (cur_age - ages) < count; cur_name++, cur_age++)
    {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }
    return (0);
}