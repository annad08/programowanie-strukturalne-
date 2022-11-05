#include <stdio.h>

void wyliczY(int w, float a, float b, float x);

int main() {
    printf("Podaj w:\n");
    int w;
    scanf("%d", &w);
    wyliczY(w, 1.5f, 2, 1.5f);


    return 0;
}

void wyliczY(int w, float a, float b, float x) {
    float y;
    switch (w) {
        case 4:
            y = (a + 2.0f) / (b + 4.0f * w);
            printf("\nWynik funkcji to\n: %f", y);
            break;
        case 8:
            y = a - x * w;
            printf("\nWynik funkcji to\n: %f", y);
            break;
        case 2:
            y = (a + b) * (a + b);
            printf("\nWynik funkcji to\n: %f", y);
        default:
            printf("Brak rozwiazan dla w = %d", w);


    }
}
