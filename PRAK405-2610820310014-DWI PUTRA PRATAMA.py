
n, kelipatan = map(int, input().split())

total_semua = 0

for i in range(1, n + 1):
    jumlah_baris = 0

    for j in range(i, 0, -1):
        jumlah_baris += j * kelipatan

        if j == i:
            print(f"({j} * {kelipatan})", end="")
        else:
            print(f" + ({j} * {kelipatan})", end="")

    print(f" = {jumlah_baris}")
    total_semua += jumlah_baris

print(total_semua)
