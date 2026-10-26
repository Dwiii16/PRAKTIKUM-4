
while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan Pilihan : "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator DWI PUTRA PRATAMA")
        break

    elif pilihan >= 1 and pilihan <= 4:
        nilaiPertama = float(input("Masukkan nilai pertama : "))
        nilaiKedua = float(input("Masukkan nilai kedua : "))

        if pilihan == 1:
            hasil = nilaiPertama + nilaiKedua
            operasi = "penjumlahan"

        elif pilihan == 2:
            hasil = nilaiPertama - nilaiKedua
            operasi = "pengurangan"

        elif pilihan == 3:
            hasil = nilaiPertama * nilaiKedua
            operasi = "perkalian"

        elif pilihan == 4:
            if nilaiKedua == 0:
                print("Tidak bisa melakukan pembagian dengan nol.")
                continue

            hasil = nilaiPertama / nilaiKedua
            operasi = "pembagian"

        print(
            f"Hasil {operasi} antara "
            f"{nilaiPertama:.2f} dengan {nilaiKedua:.2f} "
            f"adalah {hasil:.2f}"
        )

    else:
        print("Input anda salah, silahkan coba lagi")
