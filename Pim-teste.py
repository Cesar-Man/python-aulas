#CÓDIGO PARA CÁLCULO DE LUCROS DA HAVAN:

#ÁREA DE ENTRADA, PROCESSAMENTO E SAÍDA DE DADOS:
calculo = int(input('Digite o cálculo desejado: [0] Margem de EBIT [1] Margem Bruta Total [2] Porcentagem de Crescimento ')) 

def Porcentagem_2024():
    p = 0

def FinanceiroRealHavan(v1,v2,v3,v4 , nome):

    lista = [v1 , v2 , v3 ,v4]
    T = []
    limite = 1
    print(f" valores dos 4 trimestres do {nome} respectivamente" ,  lista)

    for i in lista:
        
        i = int( input("digite [0] , [1] , [2] , [3] para escolher qual valor com qual deseja analisar respectivamente "))
        T.append(lista[i])
        if len(T) > limite:
       
            break
    A = T[0]
    A_1 = T[1]
    resultado = (A_1 - A) / A + 1

    Analise = resultado * A_1
    print(f"a porcentagem de crescimento de {nome} foi de %.2f e tem como analise preditiva em comparação com %.2f  o resultado %.2f" % (resultado , A_1 , Analise))

def CalculoPorcentagemCrescimento(nome):
    semestre = ["primeiro" , " segundo "]
    limite = 2
    void = []
    
    while len(void) != limite:
        if len(void) == 1 :
            semestre.remove("primeiro")
        v1 = float(input(f'Digite o valor de {nome} do {semestre[0]} semestre: '))
        void.append(v1)
    

    resultado = (void[1] - void[0]) / void[0] + 1
    
    analise = resultado * void[1]
    print(f"a porcentagem de crescimento de {nome} foi de %.2f e tem como analise preditiva em comparação com %.2f  o resultado %.2f" % (resultado , void[1] , analise))

def Porcentagem_de_Crescimento ()   :    
    L1 = int(input('Digite o dado que deseja saber a porcentagem de crescimento: [0] Lucro Bruto [1] Receita Operacional Líquida [2] Porcentagem do EBIT [3] Receita Bruta '))
    if L1 >= 0 or L1 <= 3:
        if L1 == 0:
          #CalculoPorcentagemCrescimento("Lucro Bruto")
          FinanceiroRealHavan(811400 , 830089 , 871640 , 1227599 , "Lucro Bruto")
        if L1 == 1:
           FinanceiroRealHavan(2017100 , 2279826 , 2086320 ,2935924 , "Receita operacional Liquida" )
          #CalculoPorcentagemCrescimento("Receita operacional Liquida")
        if L1 == 2:
          FinanceiroRealHavan(140453 , 484882 , 786157 , 1524366 , "EBIT")
          #CalculoPorcentagemCrescimento("EBIT")
        if L1 == 3:
            FinanceiroRealHavan(2779189 , 3169117 , 2917902 , 4048943 , " Receita Bruta")
          #CalculoPorcentagemCrescimento("Receita Bruta")
        else:
            print('Opção inválida.')
           
            

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
if calculo == 2 :
    Porcentagem_de_Crescimento()
    
else :
    print("opçao invalida")



#FIM DO CÓDIGO: