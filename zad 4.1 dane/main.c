#include <stdio.h>
#include <stdlib.h>

void personalData (char* name, char* surname, char* pesel, char* sex, char* zipCode, char* street, char* houseNumber, char* flatNumber, char* student, char* city, float average);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[30];
	char surname[30];
	char pesel[20];
	char sex[1];
	char zipCode [10];
	char street[40];
	char houseNumber [10];
	char flatNumber[10];
	const char student[10]="student";
	char city [30];
	float average;
	printf("Podaj swoje imie\n");
	scanf("%s",name);
	printf("Podaj swoje nazwisko\n");
	scanf("%s",surname);
	printf("Podaj swoj pesel\n");
	scanf("%s",pesel);
	printf("Podaj swoja plec\n");
	scanf("%s",sex);
	printf("Podaj swoj kod pocztowy\n");
	scanf("%s",zipCode);
	printf("Podaj swoje miasto\n");
	scanf("%s",city);
	printf("Podaj swoja ulice\n");
	scanf("%s",street);
	printf("Podaj swoj nr domu\n");
	scanf("%s",houseNumber);
	printf("Podaj swoje nr mieszkania\n");
	scanf("%s",flatNumber);
	printf("Podaj swoja srednia\n");
	scanf("%f",&average);
	personalData (name, surname, pesel, sex, zipCode, street, houseNumber, flatNumber, student, city, average);
	return 0;
	
}
void personalData (char* name, char* surname, char* pesel, char* sex, char* zipCode, char* street, char* houseNumber, char* flatNumber, char* student, char* city, float average){
	printf("Imie: %s Nazwisko: %s Pesel: %s Plec: %s \n",name, surname,pesel,sex);
	printf("Kod pocztowy: %s Miasto: %s Ulica: %s  Nr domu: %s Nr mieszkania: %s \n",zipCode, city, street, houseNumber, flatNumber);
	printf("Status: %s Srednia: %f ", student,average);
}

