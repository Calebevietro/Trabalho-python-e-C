print("=== Estatísticas de Números ===")
print("Digite números (0 para encerrar):\n")
 
total    = 0
positivos = 0
negativos = 0
soma     = 0
 
while True:
    num = float(input("Digite um número: "))
 
    if num == 0:
        break
 
    total += 1
    soma  += num
 
    if num > 0:
        positivos += 1
    else:
        negativos += 1
 
print("\n=== Resultados ===")
print(f"Quantidade digitada: {total}")
print(f"Positivos:           {positivos}")
print(f"Negativos:           {negativos}")
print(f"Soma total:          {soma:.2f}")