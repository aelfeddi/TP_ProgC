#include <limits.h>
#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nombre_de_nombres = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < nombre_de_nombres; i++)
    {
        int nombre = nombres[i];
        int bits[sizeof(int) * CHAR_BIT];
        int nombre_de_bits = 0;
        int valeur = nombre;

        if (valeur == 0)
        {
            bits[nombre_de_bits++] = 0;
        }
        else
        {
            for (; valeur > 0; valeur /= 2)
            {
                bits[nombre_de_bits++] = valeur % 2;
            }
        }

        printf("%d en binaire : ", nombre);
        for (int j = nombre_de_bits - 1; j >= 0; j--)
        {
            printf("%d", bits[j]);
        }
        printf("\n");
    }

    return 0;
}