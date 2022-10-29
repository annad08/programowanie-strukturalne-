#include <stdio.h>
#include <stdlib.h>
	int suma (int a, int b);
	int roznica (int a, int b);
	int iloczyn (int a, int b);
	float iloraz (int a, int b);
	void iloraz2 (int a, int b);
	

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{ int x,y,reszta, scanfReturn;
	printf("Podaj dwie liczby calkowite \n");
	scanfReturn = scanf("%d %d", &x, &y);
	if(scanfReturn!=2){
		printf("\n Podaj liczbe\n");
		return -1;
	}
	//printf("%d,%d %d",x,y,scanfReturn);
	printf("suma: %d \n",suma(x,y));
	printf("roznica: %d \n",roznica(x,y));
	printf("iloczyn: %d \n",iloczyn(x,y));
	printf("iloraz - wynik dzielenia rzeczywistego: %0.2f\n",iloraz(x,y));
	iloraz2 (x,y);
	system("PAUSE");
	return 0;
	}
	int suma(int a, int b)
	{return a + b; }
	int roznica (int a, int b)
	{return a-b;}
	int iloczyn (int a, int b)
	{return a*b; }
	float iloraz (int a, int b)
	{return (float)a/b;}
	void iloraz2(int a, int b)
	{ printf("iloraz - wynik dzielenia calkowitego: %d reszta: %d\n",a/b,a%b);
	}
	





