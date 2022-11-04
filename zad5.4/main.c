#include <stdio.h>
#include <stdlib.h>

void szczesliwyBilet(char* bilet);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char bilet [6];
	printf("Podaj numer biletu \n");
	scanf("%s", &bilet);

	szczesliwyBilet(bilet);
	return 0;
}
void szczesliwyBilet(char* bilet){
	int a = bilet[0]-'0';
	int b = bilet[1]-'0';
	int c = bilet[2]-'0';
	int d = bilet[3]-'0';
	int e = bilet[4]-'0';
	int f = bilet[5]-'0';
	
	if((a+b+c)==(d+e+f)){
		printf("Numer biletu jest szczesliwy \n");
	}
	else {
		printf("Numer biletu nie jest szczesliwy \n");
	}
	
}

