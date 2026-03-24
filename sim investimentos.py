valor_inicial = float(input("Digite o valor inicial (R$): "))
taxa = float(input("Digite a taxa de juros anual (%): "))
anos = int(input("Digite o número de anos: "))
 
print("\n--- Simulação de Crescimento ---")
 
saldo = valor_inicial
for ano in range(1, anos + 1):
    saldo = saldo * (1 + taxa / 100)
    print(f"Ano {ano}: R$ {saldo:.2f}")
 
print(f"\nValor final após {anos} anos: R$ {saldo:.2f}")