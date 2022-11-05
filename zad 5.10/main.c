#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float podatek(float podstawa);
int main(int argc, char *argv[]) {
	float podstawa;
	printf("Podaj podstawe do obliczenia podatku \n");
	scanf("%f", &podstawa);
	printf("Podatek wynosi %.2f \n",podatek(podstawa));
	return 0;
}
float podatek(float podstawa){
	if(podstawa <= 85528){
		return (podstawa*0.18)-556.02;
	} else {
		return 14839.02+(0.32*(podstawa-85528));
	}
}
