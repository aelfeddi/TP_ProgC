#include <stdio.h>

int main(void)
{
    int compteur = 5;

    for (int ligne = 1; ligne <= compteur; ligne++)
    {
        for (int colonne = 1; colonne <= ligne; colonne++)
        {
            if (ligne == 1 || ligne == compteur || colonne == 1)
            {
                printf("*");
            }
            else
            {
                printf("#");
            }

            if (colonne < ligne)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
