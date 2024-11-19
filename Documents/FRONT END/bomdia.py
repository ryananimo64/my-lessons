horario = input("Digite em que horario você estuda M-Matutino,V-Vespertino ou N-Noturno:")


if horario == "M" or horario =="m":
 print("Bom dia aluno")
elif horario == "V" or horario =="v":
  print("Boa Tarde aluno")
elif horario == "N" or horario =="n":
  print("Boa noite aluno")
else:
  print("Valor inválido")