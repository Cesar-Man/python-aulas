#CÓDIGO PARA CÁLCULO DE LUCROS DA HAVAN:

#ÁREA DE ENTRADA, PROCESSAMENTO E SAÍDA DE DADOS:
calculo = int(input('Digite o cálculo desejado: [0] Margem de EBIT [1] Margem Bruta Total [2] Porcentagem de Crescimento '))

if calculo >= 0 or calculo <= 2:
    if calculo == 0:
        ebit = float(input('Digite o valor do EBIT: '))
        receitaLiquidaTotal = float(input('Digite a receita líquida total: '))
        margemEbit = (ebit / receitaLiquidaTotal) * 100
        print('O valor do EBIT é %.2f%.' % margemEbit)
    if calculo == 1:
        lucroBrutoTotal = float(input('Digite o valor do lucro bruto total: '))
        receitaLiquidaTotal = float(input('Digite o valor da receita liquida total: '))
        margemBrutaTotal = (lucroBrutoTotal / receitaLiquidaTotal) * 100
        print('O valor da margem bruta total é %.2f' % margemBrutaTotal)
    if calculo == 2:
        calculo = int(input('Digite o dado que deseja saber a porcentagem de crescimento: [0] Receita Bruta [1] Receita Operacional Líquida [2] Porcentagem do EBIT [3] Lucro Bruto '))
    if calculo >= 0 or calculo <= 3:
        if calculo == 0:
            valor1 = float(input('Digite o valor da receita bruta do primeiro semestre: '))
            valor2 = float(input('Digite o valor da receita bruta do segundo semestre: '))
            receitaBruta = (valor1 - valor2) / valor1 * 100
            print('A porcentagem de crescimento da receita bruta do primeiro semestre para o segundo foi de %.2f%.' % receitaBruta)
        if calculo == 1:
          valor1 = float(input('Digite o valor da receita operacional líquida do primeiro semestre: '))
          valor2 = float(input('Digite o valor da receita operacional líquida do segundo semestre: '))
          receitaOperacionalLiquida = (valor2 - valor1) / valor1 * 100
          print('A porcentagem de crescimento da receita operacional líquida do primeiro semestre para o segundo foi de %.2f%.' % receitaOperacionalLiquida)
        if calculo == 2:
          valor1 = float(input("Digite o valor do EBIT do primeiro semestre: "))
          valor2 = float(input('Digite o valor do EBIT do segundo semestre: '))
          porcentagemDoEbit = (valor2 - valor1) / valor1 * 100
          print('A porcentagem de crescimento do EBIT do primeiro semestre para o segundo foi de %.2f%.' % porcentagemDoEbit)
        if calculo == 3:
            valor1 = float(input('Digite o valor do lucro bruto do primeiro semestre: '))
            valor2 = float(input('Digite o valor do lucro bruto do segundo semestre: '))
            lucroBruto = (valor2 - valor1) / valor1 * 100
            print(lucroBruto)
        else:
            print('Opção inválida.')
else:
    print('Opção inválida.')

#FIM DO CÓDIGO: