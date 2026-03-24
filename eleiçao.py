total_eleitores = int(input("Quantas pessoas vão votar? "))
 
votos = [0, 0, 0]  # candidatos 1, 2, 3
 
for i in range(total_eleitores):
    while True:
        try:
            voto = int(input(f"Eleitor {i+1} — Vote (1, 2 ou 3): "))
            if voto in (1, 2, 3):
                votos[voto - 1] += 1
                break
            else:
                print("Voto inválido! Digite 1, 2 ou 3.")
        except ValueError:
            print("Entrada inválida! Digite um número.")
 
print("\n=== Resultado da Eleição ===")
for i in range(3):
    print(f"Candidato {i+1}: {votos[i]} voto(s)")
 
vencedor = votos.index(max(votos)) + 1
print(f"\n🏆 Vencedor: Candidato {vencedor} com {max(votos)} voto(s)!")
