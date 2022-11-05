#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 float poleTrojkata(float a, float b, float c);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("Podaj boki trojkata: \n");
	scanf("%f %f %f", &a, &b, &c);
	if (a>b && a>c)  {
		if( a>=(b+c)){
			printf("Podane liczby nie tworza trojkata \n");
			return -1;	
		}
	} else if(b>c) {
		if(b>=(a+c)){
			printf("Podane liczby nie tworza trojkata \n");
			return -1;
		}
	} else {
		if (c>=(a+b)){
			printf("Podane liczby nie tworza trojkata \n");
			return -1;
		}
	}
	printf("Pole trojkata wynosi: %.2f \n", poleTrojkata(a, b, c));
	return 0;
}
 float poleTrojkata(float a, float b, float c){
 	float p=(a+b+c)/2;
 	return sqrtf(p*(p-a)*(p-b)*(p-c));
 } 

