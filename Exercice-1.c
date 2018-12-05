/******************************************************************************
                            TD Informatique
							 Aloïs GAUCHER
*******************************************************************************/

#include <stdio.h> 

void nbpremiers(int n) {
	int nb[500],i,j;
	//Remplissage du tableau d'entiers jusqu'à n
	for (int i=0 ; i < n ; i++) nb[i] = i;
	for (int i=2 ; i < n ; i++) {
		if (nb[i] != 0) {
			for (j=i+1; j<n; j++) {
				if (nb[j]%nb[i] == 0) nb[j] = 0;
		}
		}
	}
	for (int i=2; i < n; i++) {
		if (nb[i] != 0) printf("%d\n", nb[i]);
	}
}

int main() {
	int n;
	printf("Veuillez entrer n\n");
	scanf("%d", &n);
	nbpremiers(n);

}