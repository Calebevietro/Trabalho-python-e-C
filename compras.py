print("=== Sistema de Compras ===")
print("Digite 0 no preço para finalizar.\n")
 
total = 0.0
total_itens = 0
num_produtos = 0
 
while True:
    preco = float(input("Preço do produto (0 para sair): R$ "))
    
    if preco == 0:
        break
 
    quantidade = int(input("Quantidade: "))
 
    subtotal = preco * quantidade
    total += subtotal
    total_itens += quantidade
    num_produtos += 1
 
    print(f"  Subtotal: R$ {subtotal:.2f}\n")
 
print("\n--- Resumo da Compra ---")
if num_produtos > 0:
    preco_medio = total / num_produtos
    print(f"Valor total da compra : R$ {total:.2f}")
    print(f"Quantidade total de itens: {total_itens}")
    print(f"Preço médio dos produtos : R$ {preco_medio:.2f}")
else:
    print("Nenhum produto registrado.")
