media = float(input("Digite a media do aluno:"))

if media >= 6:
    print(f"Aluno com média {media} está aprovado")
elif media <= 4:
    print(f"Aluno com média {media} está reprovado")
else:
    print(f"Aluno com média {media} está de recuperação")