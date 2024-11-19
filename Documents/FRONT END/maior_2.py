n1 = int(input("Digite o primeiro numero:"))
n2 = int(input("digite o segundo numero:"))
n3 = int(input("Digite o terceiro numero:"))

if n1 > n2 or n1 > n3:
 print(f"O primeiro número {n1} é maior que {n2},{n3}.")
elif n2 > n1 or n2 > n3:
   print(f"O segundo número {n2} é maior que {n1},{n3}.")
else:
  print(f"O segundo número {n3} é maior que {n1},{n2}.")