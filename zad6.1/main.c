#include <stdio.h>
#include <math.h>

void wyliczZ(int t);

int main() {
    printf("Podaj t:\n");
    int t;
    scanf("%d", &t);
    wyliczZ(t);


    return 0;
}

void wyliczZ(int t) {
    float z;
    switch (t) {
        case 8:
            z = 1.0f - sinf(t);
            printf("\nWynik funkcji to\n: %.2f", z);
            break;
        case 0:
        case 1:
        case 2:
        case 3:
            z = (1.0f / 2.0f) * (1 + cosf(t));
            printf("\nWynik funkcji to\n: %.2f", z);
            break;
        case 4:
        case 6:
        case 7:
            z = sqrtf(t * t + 1.0f);
            printf("\nWynik funkcji to\n: %.2f", z);
            break;
        default:
            printf("Brak rozwiazan dla t = %.2d", t);
    }
}
