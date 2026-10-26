
data = input().split()

kelipatan = int(data[0][:-1])
simbol = data[0][-1] if len(data) == 1 else data[1]

for i in range(1, 51):
    if i % kelipatan == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")
