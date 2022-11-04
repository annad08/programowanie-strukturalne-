#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float wyplata(float pensja, int lataPracy);
int main(int argc, char *argv[]) {     
	float pensja;
	int lataPracy=0;
	printf("Podaj swoja pensje netto \n");
	scanf("%f", &pensja);
	printf("Podaj swoj staz pracy \n");
	scanf("%d", &lataPracy);
	printf("Wyplata wynosi: %.2f \n", wyplata(pensja, lataPracy));
	
	return 0;
}
float wyplata(float pensja, int lataPracy){
    int dodatek = 0; 
	if(lataPracy<5){
		printf("Dodatek sie nie nalezy \n");
	}
	else if(lataPracy >= 5 && lataPracy <= 10 ){
		dodatek=lataPracy;
		printf("Dodatek wynosi: %d %%\n", dodatek);
	} else {
		dodatek=15;
		printf("Dodatek wynosi 15 %% \n");
	}
	return pensja+ pensja * (dodatek/100.0);
}


