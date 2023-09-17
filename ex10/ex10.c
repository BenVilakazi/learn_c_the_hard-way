#include <stdio.h>

int main(int argc,char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }
    int i;
    for (i = 0; argv[1][i] != '\0'; i++)
    {
        char l = argv[1][i];

        switch (l)
        {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;

            case 'y':
            case 'Y':
                if (i > 2) {
                    /*special cases*/
                    printf("%d: 'A'\n", i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, l);

        }
    }
    return (0);
}