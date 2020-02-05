#include <stdlib.h>
#include <stdio.h>
#define MAX 100
#define MIN 1


int main(int argv, char* argc[]){

	int game = 1;
	int continuerPartie = 1;

	while(continuerPartie){
		srand(time(NULL));
		int nbreMystere = (rand() % (MAX - MIN + 1)) + MIN;

		int nbre, compteur;

		while(nbre != nbreMystere){
			printf("Quel est le nombre ? ");
			scanf("%d", &nbre);
			if(nbre < nbreMystere)
				printf("C'est plus !\n");
			else if(nbre > nbreMystere)
				printf("C'est moins !\n");
			compteur++;
		}

		printf("Bravo, vous avez trouvé le nombre mystère en %d coups !!!\n", compteur);
		printf("Voulez-vous continuer ? (1/0)");
		char choix = 'O';
		scanf("%d", &choix);

	}	

	return 0;
}