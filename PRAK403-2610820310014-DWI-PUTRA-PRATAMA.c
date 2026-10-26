
#include <stdio.h>

int main() {
    int angka1, angka2;
    int i;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &angka1, &angka2);

    printf("%d %d ", angka1, angka2);

    if (angka1 < angka2) {
        for (i = angka1 + 1; i <= angka2; i++) {
            printf("- %d %d ", i, angka1 + angka2 - i);
        }
    } else if (angka1 > angka2) {
        for (i = angka1 - 1; i >= angka2; i--) {
            printf("- %d %d ", i, angka1 + angka2 - i);
        }
    }

    printf("\n");

    return 0;
}
