#include <stdlib.h>
#include <stdio.h>
#define MAX 100
#define MIN 1


int main(int argv, char* argc[]){

	int game = 1;

	while(game){
		srand(time(NULL));
		int nbreMystere = (rand() % (MAX - MIN + 1)) + MIN;

		int nbre;

		while(nbre != nbreMystere){
			printf("Quel est le nombre ? ");
			scanf("%d", &nbre);
			if(nbre < nbreMystere)
				printf("C'est plus !\n");
			else if(nbre > nbreMystere)
				printf("C'est moins !\n");
		}

		printf("Bravo, vous avez trouvé le nombre mystère !!!\n");
		printf("Voulez-vous continuer ? (1/0)");
		scanf("%d", &game);
	}	

	return 0;
}