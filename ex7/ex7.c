#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
    int dist = 100;
    float power = 2.234f;
    double super = 56789.4321;
    char i = 'B';
    char firstName[50] = "Ben";
    char lastName[20] = "Vilakazi";

    printf("You are %d miles away.\n", dist);
    printf("You have %f lvl of power\n", power);
    printf("You have %f amnt of superabilities\n", super);
    printf("I have an initial %c\n", i);
    printf("My first name is %s\n", firstName);
    printf("My last name is %s\n", lastName);
    printf("My whole name is %s %c. %s\n", firstName , i, lastName);

    int bugs = 100;
    double bug_rate = 1.3;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long uni_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", uni_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n");

    double part_of_uni = expected_bugs / uni_of_defects;
    printf("That is only a %e portion of the universe.\n", part_of_uni);

    char nul_byte = '\0';
    int care_perc = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_perc);

    return (0);
}