#include <stdio.h>
#include "math.h"

void wyswietlKolor(char kolor[]);

float poleProstokata(float a, float b);

float poleKola(float promien);

float poleTrojkata(float a, float h);


int main() {
    int figura = 0;
    char kolor[30];
    printf("Wybierz figure 1-kwadrat,2-prostokat,3-kolo,4-trojkat:\n");
    scanf("%d", &figura);
    printf("Podaj kolor figury\n");
    scanf("%s", kolor);

    switch (figura) {
        case 1:
            printf("Podaj bok kwadratu \n");
            float a;
            scanf("%f", &a);
            printf("Wybrales kwadrat, kolor: ");
            wyswietlKolor(kolor);
            printf(", pole: %1.f\n", poleProstokata(a, a));
            break;
        case 2:
            printf("Podaj boki prostokata odzielone spacja \n");
            float bok1, bok2;
            scanf("%f %f", &bok1, &bok2);
            printf("Wybrales prostokat, kolor: ");
            wyswietlKolor(kolor);
            printf(", pole: %1.f\n", poleProstokata(bok1, bok2));
            break;
        case 3:
            printf("Podaj promien kola  \n");
            float r;
            scanf("%f", &r);
            printf("Wybrales kolo, kolor: ");
            wyswietlKolor(kolor);
            printf(", pole: %1.f\n", poleKola(r));
            break;
        case 4:
            printf("Podaj podstawe i wysokosc trojkata odzielone spacja  \n");
            float podstawa, wysokosc;
            scanf("%f %f", &podstawa, &wysokosc);
            printf("Wybrales trojkat, kolor: ");
            wyswietlKolor(kolor);
            printf(", pole: %1.f\n", poleTrojkata(podstawa, wysokosc));
            break;
        default:
            printf("Podano niepoprawny identyfikator figury\n");
    }

    return 0;
}

void wyswietlKolor(char kolor[]) {
    printf("%s", kolor);
}

float poleProstokata(float a, float b) {
    return a * b;
}

float poleKola(float promien) {
    return M_PI * promien * promien;
}

float poleTrojkata(float a, float h) {
    return (1.0f / 2.0f) * a * h;
}
