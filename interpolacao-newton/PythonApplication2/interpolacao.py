entrada = [(1,  0),
           (3,  6),
           (4, 24),
           (5, 60)]

diferencas = {}

diferencas.update({0: []})
for i in range(len(entrada) - 1):  
    diferencas[0].append((entrada[i + 1][1] - entrada[i][1])/
                         (entrada[i + 1][0] - entrada[i][0]))

loop = true
k = 1
while k < len(entrada) - 1:
    for i in range(len(diferencas[k - 1]) - 1):
        if k not in diferencas:
            diferencas.update({k: []})
    
        diferencas[k].append((diferencas[  k - 1  ][i + 1] - diferencas[k - 1][i])/
                             (   entrada[i + k + 1][  0  ] -    entrada[  i  ][0]))
    k += 1

x = 2
p = entrada[0][1]
for i in range(len(diferencas)):
    k = 0
    r = 0
    while k <= i:
        r *= (x - entrada[k][0])
        k += 1;
    p += r

print(p)





