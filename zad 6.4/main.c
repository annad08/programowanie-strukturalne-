#include <stdio.h>

void wyswietlKwartalIDni(int numerMiesiaca);

int main() {
    int numerMiesiaca;
    printf("Podaj numer miesiaca 1-12:\n");
    scanf("%d", &numerMiesiaca);
    wyswietlKwartalIDni(numerMiesiaca);
}

void wyswietlKwartalIDni(int numerMiesiaca) {
    if (numerMiesiaca < 1 || numerMiesiaca > 12) {
        printf("nieznany numer miesiaca, wybierz liczbe z przedzialu 1-12");
        return;
    }
    if (numerMiesiaca <= 3) {
        printf("Miesiac %d nalezy do kwartalu pierwszego ", numerMiesiaca);
    } else if (numerMiesiaca <= 6) {
        printf("Miesiac %d nalezy do kwartalu drugiego ", numerMiesiaca);
    } else if (numerMiesiaca <= 9) {
        printf("Miesiac %d nalezy do kwartalu trzeciego ", numerMiesiaca);
    } else {
        printf("Miesiac %d nalezy do kwartalu czwartego ", numerMiesiaca);
    }

    int iloscDni;
    if (numerMiesiaca == 2) {
        iloscDni = 28;
    } else if (numerMiesiaca < 8 ) {
        if (numerMiesiaca % 2 == 0) {
            iloscDni = 30;
        } else {
            iloscDni = 31;
        }
    } else {
        if (numerMiesiaca % 2 == 0) {
            iloscDni = 31;
        } else {
            iloscDni = 30;
        }
    }
    printf("i ma %d dni.\n", iloscDni);
}
