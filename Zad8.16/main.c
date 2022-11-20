#include <stdio.h>
#include <stdlib.h>

void logowanie();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	logowanie();
	
	return 0;
}
void logowanie(){
	char password[] =  "student";
	char userPassword[10];

	int comparisonResult = -1;
	int loginLimit = 0;
	while(comparisonResult != 0){
		if(loginLimit>=5){
			printf("Przekroczono limit 5 logowan\n");
			return;
		}
		printf("Podaj haslo \n");
		scanf("%s", userPassword);
		comparisonResult = strcmp(password,userPassword);
		loginLimit++;
	}
	printf("Podaj wiadomosc do zaszyfrowania:\n");
	char toEncrypt[30];
	scanf("%s",toEncrypt);
	printf("Wiadomosc do zaszyfrowania to, %s\n",toEncrypt);
	int i = 0;
	for(i=0;i<30 && toEncrypt[i]!='\0';i++){
		toEncrypt[i]=toEncrypt[i]+13;
	}
	printf("W jakim trybie wyswietlic wiadomosc? 1 = odszyfrowana 2 = zaszyfrowana\n");
	int displayMode = 2;
	scanf("%d",&displayMode);
	if(displayMode == 1){
		char decrypted[30];
		for(i=0;i<30 && toEncrypt[i]!='\0';i++){
			decrypted[i]=toEncrypt[i]-13;
		}
		decrypted[i+1]='\0';
		printf("Odszyfrowana wiadomosc to: %s\n",decrypted);
	}else{
		printf("Zaszyfrowana wiadomosc to: %s\n",toEncrypt);
	}
}
