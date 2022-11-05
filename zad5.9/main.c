#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sprawdzZnak(char a);
int main(int argc, char *argv[]) {
	char a;
	printf("Podaj znak z klawiatury \n");
	scanf("%c", &a);
	sprawdzZnak(a);
	return 0;
}
void sprawdzZnak(char a){
 printf("\npodano znak %c\n", a);
 int x = a;
 if((x>=65 && x<=90) || (x>=96 && x<=122)){
 	printf("Podany znak jest litera angielskiego alfabetu \n");
 	
 }if (x>9 && x<100) {
 	printf("Kod ASCII podanego znaku jest dwucyfrowy");
 }
 if(a=='^' || a=='+' || a=='-' || a=='*' || a=='/' || a=='%'){
 	printf("Podany znak jest znakiem dzia³ania arytmetycznego \n");
 	
 }
	
}
