
#include <stdio.h>

int main() {
    int kelipatan;
    char simbol;

    printf("Masukkan bilangan kelipatan: ");
    scanf("%d", &kelipatan);

    printf("Masukkan simbol pengganti: ");
    scanf(" %c", &simbol);

    if (kelipatan <= 0) {
        printf("Bilangan kelipatan harus lebih dari 0.\n");
        return 0;
    }

    for (int angka = 1; angka <= 50; angka++) {
        if (angka % kelipatan == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", angka);
        }
    }

    printf("\n");
    return 0;
}
