#include <stdio.h>
#include <stdlib.h>
void ileLiterIleCyfr(char* zdanie, char szukanaLitera);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char szukanaLitera;
	char zdanie[100];
	
	printf("Podaj zdanie zakonczone kropka \n");
	scanf("%[^\t\n]", zdanie);
	printf("Podaj litere ktora chcesz sprawdzic \n");
	scanf(" %c", &szukanaLitera);
	
	ileLiterIleCyfr(zdanie, szukanaLitera);
	return 0;
}
void ileLiterIleCyfr(char* zdanie, char szukanaLitera){
	int i = 0;
	int ileLiter = 0;
	int ileCyfr = 0;
	while(zdanie[i]!='.'){
		char znak = zdanie[i];
		i++;
		if(znak==szukanaLitera){
		ileLiter=ileLiter+1;
		}
		if(znak=='0' || znak =='1' || znak=='2' || znak=='3' || znak=='4' || znak=='5' || znak=='6' || znak=='7' || znak=='8' || znak=='9'){
			ileCyfr=ileCyfr+1;
			
		}
	}
	printf("Znaleziono %d liter i %d cyfr", ileLiter, ileCyfr);
	}
	
