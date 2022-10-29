#include <stdio.h>
#include <stdlib.h>

float poleKwadratu(float bok1);
float poleProstokata(float bok1, float bok2);
float poleTrapezu(float podstawa, float bok2, float wysokosc);
float poleTrojkata(float podstawa, float wysokosc);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int wyborFigury;
	float pole=0;
	printf("Podaj dla jakiej figury chcesz obliczyc pole: 1-kwadrat, 2-prostokat, 3-trapez, 4-trojkat \n");
	scanf("%d", &wyborFigury);
	if(wyborFigury==1){
		float bok1;
		printf("Podaj dlugosc boku kwadratu \n");
		scanf("%f", &bok1);
		pole = poleKwadratu(bok1);
	}
	else if(wyborFigury==2){
		float bok1, bok2;
		printf("Podaj dlugosc pierwszego boku prostokata \n");
		scanf("%f", &bok1);
		printf("Podaj dlugosc drugiego boku prostokata \n");
		scanf("%f", &bok2);
		pole = poleProstokata(bok1,bok2);
		}
	else if(wyborFigury==3){
		float podstawa, bok2, wysokosc;
		printf("Podaj dlugosc podstawy trapezu \n");
		scanf("%f", &podstawa);
		printf("Podaj dlugosc boku trapezu \n");
		scanf("%f", bok2);
		printf("Podaj dlugosc wysokosci trapezu \n");
		scanf("%f", &wysokosc);
		pole = poleTrapezu(podstawa,bok2,wysokosc);
		}
		
		else if(wyborFigury==4){
		float podstawa,wysokosc;
		printf("Podaj dlugosc podstawy trojkata \n");
		scanf("%f", &podstawa);
		printf("Podaj dlugosc wysokosci trojkata \n");
		scanf("%f", &wysokosc);
		pole = poleTrojkata(podstawa,wysokosc);
		}
		printf("Wyliczone pole figury: %.2f\n", pole);
			
	
	return 0;
}
float poleKwadratu(float bok1){
	return bok1*bok1;
}
float poleProstokata(float bok1, float bok2){
	return bok1*bok2;
	
}
float poleTrapezu(float podstawa, float bok2, float wysokosc){
	return ((podstawa+bok2)*wysokosc)/2;
	
}
float poleTrojkata(float podstawa, float wysokosc){
	return (podstawa*wysokosc)/2;
}

