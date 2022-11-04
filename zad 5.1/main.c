#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float wynik(int t);
	


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Dla t==8 %f \n", wynik(8));
	printf("Dla t==2 %f \n", wynik(2));
	printf("Dla t==4 %f \n", wynik(4));

	
	return 0;
}

float wynik(int t){
	if(t==8){
		return 1.0-sin(t);
	}
	else if(t==0 || t==1 || t==2 || t==3){
		return (1.0/2.0)*(1+cos(t));
	}
	else if(t==4 || t==6 || t==7){
		return sqrtf(t*t +1.0);
	}
	
}

