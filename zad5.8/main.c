#include <stdio.h>
#include <stdlib.h>

float wylicz(int a, int b, int c);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("Podaj trzy dodatnie liczby calkowite \n");
	scanf("%d %d %d", &a, &b, &c);
	printf("Wynik funkcji to: %.2f \n", wylicz(a,b,c));
	return 0;
}
float wylicz(int a, int b, int c){
	if (a%2==0 && b%2==0 && c%2==0){
		return a + b + c;
	}
	if(a==1 || b==1 || c==1){
		return a*b*c;
	}
	else{
		return -1;
	}
}
