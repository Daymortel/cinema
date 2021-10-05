#include <stdio.h>

int main(void)
{
	char *filmCategorieEnfant[3];
	// Tableau avec les 3 films
	filmCategorieEnfant[0] = "Les télétobises";
	filmCategorieEnfant[1] = "Dora l'exploratrice";
	filmCategorieEnfant[2] = "Tchoupi et doudou";
	char *filmCategorieAdos[3];
	// Tableau avec les 3 films
	filmCategorieAdos[0] = "Twilight";
	filmCategorieAdos[1] = "Harry Potter";
	filmCategorieAdos[2] = "Vampire diaries";
	char *filmCategorieAdulte[3];
	// Tableau avec les 3 films
	filmCategorieAdulte[0] = "The Shining";
	filmCategorieAdulte[1] = "La Nonne";
	filmCategorieAdulte[2] = "Conjuring";
	// Je demande ton âge
	int age = printf("Quel âge as-tu ?\n");
	scanf("%i", &age);
	// Tu me dis ton âge
	if(age < 11)
	{
		printf("Tu iras voir un film pour enfant\n");
	}
	else if(age >= 11 && age < 18)
	{
		printf("Tu iras voir un film pour adolescent\n");
	}
	else if(age >= 18)
	{
		for(int a = 0; a < 3; a++)
		{
			// Choix des films
			int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieAdulte[a]);
			scanf("%i", &answer);
			if(answer == 1)
			{
				printf("Bon film !\n");
				return 0;
			}
		}
		for(int a = 0; a < 3; a++)
		{
			// Choix des films
			int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieAdos[a]);
			scanf("%i", &answer);
			if(answer == 1)
			{
				printf("Bon film !\n");
				return 0;
			}
		}
		for(int a = 0; a < 3; a++)
		{
			// Choix des films
			int answer = printf("Veux-tu regarder %s ? [oui(1)/non(2)]\n", filmCategorieEnfant[a]);
			scanf("%i", &answer);
			if(answer == 1)
			{
				printf("Bon film !\n");
				return 0;
			}
		}
	}
	system("PAUSE");
}
