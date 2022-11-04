#include <stdio.h>
#include <stdlib.h>

int stypendium(float ocena1, float ocena2, float ocena3);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float ocena1, ocena2, ocena3 = 0.0;
	printf("Podaj oceny z egzaminow: \n");
	scanf("%f %f %f", &ocena1, &ocena2, &ocena3);
	printf("\n%.2f %.2f %.2f\n", ocena1, ocena2, ocena3);
	printf("Stypendium wynosi: %d zl\n", stypendium(ocena1, ocena2, ocena3));
	return 0;
}

int stypendium(float ocena1, float ocena2, float ocena3){
	if (ocena1 < 3 || ocena2 < 3 || ocena3 < 3 ){
		return 0;
	}
	float srednia = (ocena1 + ocena2 + ocena3)/3.0;
	printf("Srednia wynosi: %.2f \n", srednia);
	if (srednia > 4){
		return 500;
	}
	else {
		return 300;
	}
}



