#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void rownanieKwadratowe(float a, float b, float c);

int main(int argc, char *argv[]) {
	
	float a;
	float b;
	float c; 
	printf("Podaj wartosc a \n");
	scanf("%f", &a);
	printf("Podaj wartosc b \n");
	scanf("%f", &b);
	printf("Podaj wartosc c \n");
	scanf("%f", &c);
	rownanieKwadratowe(a,b,c);
	return 0;
}
void rownanieKwadratowe(float a, float b, float c){
	float d = ((b*b)-(4.0*a*c)); 
	printf("Delta: %.2f \n", d );
	if(d<0){
		printf("Brak rozwiazan w zbiorze R");
	}
	else if(d==0){
		float x = -b/(2*a);
		printf("x: %.2f \n", x);
	}
	else if(d>0){
		float x1;
		x1 = (-b - sqrtf(d))/(2.0*a);
		float x2;
		x2 = (-b + sqrtf(d))/(2.0*a);
		printf("x1 = %.2f \n", x1);
		printf("x2 = %.2f \n ", x2);	}

}
