#include <stdio.h>
#include <stdlib.h>

int ileParzystych(int ileLiczb, int liczby[]);

int main(int argc, char *argv[]) {
	int ileLiczb;
	printf("Ile liczb chcesz podac? \n");
	scanf("%d", &ileLiczb);
	int liczby[ileLiczb];
	int i;
	for(i=0; i<ileLiczb; i++){
		printf("Podaj liczbe \n");
		scanf("%d",&liczby[i]);
	}
	int wynik = ileParzystych(ileLiczb, liczby);
	printf("Wynik: %d \n ", wynik);
	
	return 0;
}
int ileParzystych(int ileLiczb, int liczby[]){
	int parzyste = 0;
	int j;
	for(j=0;j<ileLiczb; j++){
		if(liczby[j]%2==0){
			parzyste++;
		}
		
	}
	return parzyste;
}

