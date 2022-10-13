#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("podaj liczbe egzaminow ");
	scanf("%i", &n);
	float s;
	int licz;
	s = 0;
	licz = 0;
	float x;
	
	while(licz<n){
		printf("Podaj ocene ");
		scanf("%f", &x);
		s=s+x;
		licz=licz+1;
	}
	s=s/n;
	printf("Srednia: %.2f", s);
	
	return 0;
}
