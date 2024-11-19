salario = int(input("Digite seu salario:"))
salariofinal = 0

if salario < 280:
    salariofinal = salario * 0.20 + salario
    print(f"O seu salario antes do reajuste: {salario},o porcentual de aumento aplicado 20% novo salario após reajuste: {salariofinal}")
elif salario > 280:
    salariofinal = (salario * 0.15) + salario
    print(f"O seu salario antes do reajuste: {salario},o porcentual de aumento aplicado 15% novo salario após reajuste: {salariofinal}")
elif salario > 700:
    salariofinal = (salario * 0.10) + salario
    print(f"O seu salario antes do reajuste: {salario},o porcentual de aumento aplicado 10% novo salario após reajuste: {salariofinal}")
elif salario > 1500:
    salariofinal = (salario * 0.05) + salario
    print(f"O seu salario antes do reajuste: {salario},o porcentual de aumento aplicado 5% novo salario após reajuste: {salariofinal}")
