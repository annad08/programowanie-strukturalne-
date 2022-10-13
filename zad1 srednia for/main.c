#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=0;
	printf("Podaj liczbe egzaminow \n ");
	scanf("%d", &n);
	float s=0;
	int i=1;
	
	for(i;i<=n;i++){
	
	printf("Podaj ocene \n ");
	float x=0;
	scanf("%f", &x);
	s=s+x;
}
	s=s/n;
	printf("Srednia: %.2f\n ", s );
	return 0;
}
