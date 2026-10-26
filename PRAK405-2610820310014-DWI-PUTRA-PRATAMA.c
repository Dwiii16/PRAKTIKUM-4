
#include <stdio.h>

int main() {
    int n, kelipatan;
    int i, j;
    int jumlah_baris, total_semua = 0;

    scanf("%d %d", &n, &kelipatan);

    if (n <= 0 || kelipatan <= 0) {
        return 0;
    }

    for (i = 1; i <= n; i++) {
        jumlah_baris = 0;

        for (j = i; j >= 1; j--) {
            jumlah_baris += j * kelipatan;

            if (j == i) {
                printf("(%d * %d)", j, kelipatan);
            } else {
                printf(" + (%d * %d)", j, kelipatan);
            }
        }

        printf(" = %d\n", jumlah_baris);
        total_semua += jumlah_baris;
    }

    printf("%d\n", total_semua);

    return 0;
}
