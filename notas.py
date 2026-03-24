n = int(input("Quantos alunos existem na turma? "))
 
aprovados    = 0
recuperacao  = 0
reprovados   = 0
soma_notas   = 0.0
 
for i in range(1, n + 1):
    while True:
        nota = float(input(f"Nota do aluno {i}: "))
        if 0 <= nota <= 10:
            break
        print("Nota inválida! Digite um valor entre 0 e 10.")
 
    soma_notas += nota
 
    if nota >= 7:
        aprovados += 1
    elif nota >= 5:
        recuperacao += 1
    else:
        reprovados += 1
 
media = soma_notas / n
 
print("\n===== Resultado da Turma =====")
print(f"Média da turma:       {media:.2f}")
print(f"Aprovados  (≥ 7):     {aprovados} aluno(s)")
print(f"Recuperação (5–6.9):  {recuperacao} aluno(s)")
print(f"Reprovados  (< 5):    {reprovados} aluno(s)")
