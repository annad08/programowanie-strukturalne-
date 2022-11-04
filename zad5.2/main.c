#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int znajdujeSieWKwadracie(float x, float y);
int znajdujeSieWKole(float x, float y, float r);


int main(int argc, char *argv[]) {
	float x, y;
	printf("Wprowadz x i y \n");
	scanf("%f %f", &x,&y);
	int wKwadracie=znajdujeSieWKwadracie(x,y);
	if(wKwadracie == 1) {
		printf("Punkt znajduje sie w kwadracie \n");
	}
	else{
		printf("Punkt nie znajduje sie w kwadracie \n");
	}
	float r;
	printf("Podaj r \n");
	scanf("%f", &r);
	int wKole = znajdujeSieWKole(x,y,r);
	if(wKole == 1) {
		printf("Punkt znajduje sie w kole \n");
	}
	else{
		printf("Punkt nie znajduje sie w kole \n");
	}
	
	return 0;
}
int znajdujeSieWKwadracie (float x, float y){
	if(x <= 1 && x >= -1 && y <= 1 && x >= -1){
		return 1;
	}
	else {
		return 0;
	}	
}
int znajdujeSieWKole(float x, float y, float r){
	if ((x)*(x) + (y)*(y) < r*r){
	 return 1;
	}
	else {
		return 0;
	}
}


