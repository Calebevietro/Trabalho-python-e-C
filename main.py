secreto = 37
tentativas = 0
 
print("=== Jogo de Adivinhação ===")
print("Tente adivinhar o número secreto!\n")
 
while True:
    chute = int(input("Digite seu chute: "))
    tentativas += 1
 
    if chute > secreto:
        print("Muito alto! Tente novamente.\n")
    elif chute < secreto:
        print("Muito baixo! Tente novamente.\n")
    else:
        print(f"\n🎉 Parabéns! Você acertou em {tentativas} tentativa(s)!")
        break