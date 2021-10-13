#include <stdio.h>

int main(void)
{
    // Tableau avec les 3 films pour enfants
    char *filmCategorieEnfant[3];
    filmCategorieEnfant[0] = "Les Télétobises";
    filmCategorieEnfant[1] = "Dora l'exploratrice";
    filmCategorieEnfant[2] = "Tchoupi";
    // Tableau avec les 3 films pour ados
    char *filmCategorieAdos[3];
    filmCategorieAdos[0] = "Twilight";
    filmCategorieAdos[1] = "Harry Potter";
    filmCategorieAdos[2] = "Vampire diaries";
    // Tableau avec les 3 films pour adultes
    char *filmCategorieAdulte[3];
    filmCategorieAdulte[0] = "The Shining";
    filmCategorieAdulte[1] = "La Nonne";
    filmCategorieAdulte[2] = "Conjuring";
    // Je demande ton âge
    int age = printf("Quel âge as-tu ?\n");
    scanf("%i", &age);
    // Tu me dis ton âge
    if (age < 11)
    {
        for (int a = 0; a < 3; a++)
        {
            // Choix des films pour enfants
            int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieEnfant[a]);
            scanf("%i", &answer);
            if (answer == 1)
            {
                printf("Bon film !\n");
                return 0;
            }
        }
    }
    else if (age >= 11 && age < 18)
    {
        for (int a = 0; a < 3; a++)
        {
            // Choix des films pour ados
            int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieAdos[a]);
            scanf("%i", &answer);
            if (answer == 1)
            {
                printf("Bon film !\n");
                return 0;
            }
        }
        for (int a = 0; a < 3; a++)
        {
            // Choix des films pour enfants
            int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieEnfant[a]);
            scanf("%i", &answer);
            if (answer == 1)
            {
                printf("Bon film !\n");
                return 0;
            }
        }
    }
    else if (age >= 18)
    {
        for (int a = 0; a < 3; a++)
        {
            // Choix des films pour adultes
            int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieAdulte[a]);
            scanf("%i", &answer);
            if (answer == 1)
            {
                printf("Bon film !\n");
                return 0;
            }
        }
        for (int a = 0; a < 3; a++)
        {
            // Choix des films pour ados
            int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieAdos[a]);
            scanf("%i", &answer);
            if (answer == 1)
            {
                printf("Bon film !\n");
                return 0;
            }
        }
        for (int a = 0; a < 3; a++)
        {
            // Choix des films pour enfants
            int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieEnfant[a]);
            scanf("%i", &answer);
            if (answer == 1)
            {
                printf("Bon film !\n");
                return 0;
            }
        }
    }
}
