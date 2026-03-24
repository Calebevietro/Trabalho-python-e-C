while True:
    numero = int(input("Digite um número para ver a tabuada: "))
 
    print(f"\n=== Tabuada do {numero} ===")
    for i in range(1, 11):
        print(f"{numero} x {i:2} = {numero * i}")
 
    opcao = int(input("\nDeseja ver outra tabuada? (1 = Sim / 0 = Não): "))
    if opcao == 0:
        print("Encerrando o programa. Até logo!")
        break
    print()
