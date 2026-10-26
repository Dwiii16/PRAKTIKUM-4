
batas = int(input("Masukkan batas maksimal: "))

if batas < 1:
    print("Batas maksimal harus minimal 1.")
else:
   
    for angka in range(1, batas + 1, 2):
        print(angka, end=" ")
    print()

    angka = batas if batas % 2 == 0 else batas - 1

    for i in range(angka, 1, -2):
        print(i, end=" ")
    print()
