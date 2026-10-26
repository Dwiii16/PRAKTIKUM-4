
#include <stdio.h>

int main() {
    int batas;
    int angka;

    printf("Masukkan batas maksimal: ");
    scanf("%d", &batas);

    if (batas < 1) {
        printf("Batas maksimal harus minimal 1.\n");
        return 0;
    }

    for (angka = 1; angka <= batas; angka += 2) {
        printf("%d ", angka);
    }
    printf("\n");

    angka = (batas % 2 == 0) ? batas : batas - 1;

    for (; angka >= 2; angka -= 2) {
        printf("%d ", angka);
    }
    printf("\n");

    return 0;
}
