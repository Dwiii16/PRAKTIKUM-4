
angka1, angka2 = map(int, input("Masukkan dua angka: ").split())

print(angka1, angka2, end=" ")

if angka1 < angka2:
    for i in range(angka1 + 1, angka2 + 1):
        print("-", i, angka1 + angka2 - i, end=" ")
else:
    for i in range(angka1 - 1, angka2 - 1, -1):
        print("-", i, angka1 + angka2 - i, end=" ")

print()
