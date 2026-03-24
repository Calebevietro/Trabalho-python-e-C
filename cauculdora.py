n = int(input("Quantos números você deseja digitar? "))
 
numeros = []
for i in range(n):
    num = float(input(f"Digite o {i+1}º número: "))
    numeros.append(num)
 
soma  = sum(numeros)
media = soma / n
maior = max(numeros)
menor = min(numeros)
 
print(f"\n=== Resultados ===")
print(f"Soma:   {soma}")
print(f"Média:  {media:.2f}")
print(f"Maior:  {maior}")
print(f"Menor:  {menor}")