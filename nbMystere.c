#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
int main() 
{
    int nbAleatoire, nb;
    int essais = 10;
    int resultat = 0;

    srand(time(NULL));
    nbAleatoire = rand() % 100 + 1;

    while (essais != 0)
    {
        printf("Veuillez saisir un nombre = ");
        scanf("%d", &nb);

        resultat ++;

        if (nbAleatoire > nb)
        {
            printf("Le nombre aleatoire est plus grand ! \n");
        }

        else if (nbAleatoire < nb)
        {
            printf("Le nombre aleatoire est plus petit ! \n");
        }

        else {
            printf("Bien joué, vous avez trouvez le nombre ! \n");
            break;
        }

        essais --;


    }

    if (essais == 0)
    {
        printf("Dommage! le nombre mystère était %d \n", nbAleatoire);
    }
    else {
        printf("Bravo! le nombre mystere etait %d \n", nbAleatoire);
        printf("Tu as trouve le nombre, en %d essais\n", essais);
    }
    
}

