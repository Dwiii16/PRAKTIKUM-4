
#include <stdio.h>

int main() {
    int pilihan;
    double nilaiPertama, nilaiKedua, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        if (scanf("%d", &pilihan) != 1) {
            printf("Input anda salah, silahkan coba lagi\n");
            return 0;
        }

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator DWI PUTRA PRATAMA\n");
            break;
        }

        if (pilihan < 1 || pilihan > 4) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%lf", &nilaiPertama);

        printf("Masukkan nilai kedua : ");
        scanf("%lf", &nilaiKedua);

        switch (pilihan) {
            case 1:
                hasil = nilaiPertama + nilaiKedua;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n",
                       nilaiPertama, nilaiKedua, hasil);
                break;

            case 2:
                hasil = nilaiPertama - nilaiKedua;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n",
                       nilaiPertama, nilaiKedua, hasil);
                break;

            case 3:
                hasil = nilaiPertama * nilaiKedua;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n",
                       nilaiPertama, nilaiKedua, hasil);
                break;

            case 4:
                if (nilaiKedua == 0) {
                    printf("Tidak bisa melakukan pembagian dengan nol.\n");
                } else {
                    hasil = nilaiPertama / nilaiKedua;
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n",
                           nilaiPertama, nilaiKedua, hasil);
                }
                break;
        }
    }

    return 0;
}
