#include <stdio.h>
/**
 * Comments go here
*/
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *prov[] = {
        "Gauteng", "Kwazulu-Natal", "Limpopo", "Eastern Cape"
    };

    int num_prov = 4;

    for (i = 0; i < num_prov; i++)
    {
        printf("Prov %d: %s\n", i, prov[i]);
    }
    return (0);
}