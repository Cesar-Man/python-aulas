
def animal ():
 lista = ["leao" , "tigre" , "faizao " , "galiha"  , "pombo"]

 for i in lista:
    
    print(i)
#-----------------------------------------------------------------
def numeros ():
  
  numeros = [0,1,2,3,4,5,6,7,8,9]

  for i in numeros:
    print(i)
#-----------------------------------------------------------------
def linhas ():
  palavra = input("Quero um texto")
  for letra in palavra:
    print(letra)
#-----------------------------------------------------------------
def Break_e_Continue ():
  lista = [0,1,2,3,4,5,6,7,8,9]
  for i in lista:
    if i == 5 :
      continue
    print ( i )
#-----------------------------------------------------------------
def Range():
  for i in range (1 , 29):
    print (i , end = ' ')
#-----------------------------------------------------------------
def Range_2 ():
  for i in range (0 , 11 , 2):
    print (i , end = ' ')
#-----------------------------------------------------------------
def tabuada ():
  
  num = int(input("qual tabuada queres    "))
  for i in range (11):
    print("%2d * %2d = %.2d" %(i , num , i * num))
#-----------------------------------------------------------------
def Soma_numero_digitado():
   soma = 0
   for i in range (10):
     num = int (input("Digite o numero %d " % (i + 1)))
     soma = soma + num
   print ( soma )
#-----------------------------------------------------------------
def Binario():

  binario = input (" solte um numero binario ") 
  acumulador = 0
  expoente = len(binario) - 1 #len = lenght
  for digito in binario:
    acumulador += 2 ** expoente * int(digito)
    expoente -= 1
  print(acumulador)
#-----------------------------------------------------------------
def While_1():
  
  contador = 1
  while( contador <= 10):
    nota1 = float(input( " tua nota n1 "))
    nota2 = float(input( " tua nota n2 "))
    print ("a media do aluno %d é %.2f " % (contador , (nota1 + nota2) / 2))
    contador += 1
#-----------------------------------------------------------------
def While_2():
  
  soma = 0
  count = 0
  Continue = 's'

  while (Continue == 's' or Continue == 'S'):
    num = int(input("diga outro numero inteiro "))
    soma += num
    count += 1
    Continue = input ("continuar ?  (S/N)")
  media = soma / count
  print(media)

#-----------------------^^^^^^^^^------------------Aula anterior-------------------

#---------aula----------------dia-----------------8/05/2026-------------------------
#Arrays-----------------------------------------------------------------------------

def lista():

  mes = ["jan ","fev ","mar ",'abr ','mai ','jun ','jul ', 'ago ','set ','out ','nov ','dez ']
  salarios = []

  for i in range(12):
    salario = float (input("Digite o salario de %s " % mes[i]))
    salarios.append(salario)  # append colocou em salariOS o valor dito em salario(float(input))

  salario_13 = 0
  for i in salarios:
    salario_13 += i
  salario_13 /= 12
  TercoFeria = salario_13 / 13
  
  print(salario_13  , "valor do teu decimo terceiro")
  print(TercoFeria , "é o teu teço ferias")

def inserir():

  lista = []
  for i in range(5):
    Texto = input("diga algo %d" % (i +1)) 
    lista.insert(1, Texto)
    print(lista)

def nomes():
  v1 = []
  for i in range(5):
    nome = input("diga nome %d  "%(i + 1))
    v1.append(nome)
  
  numero = int(input("fale um numero de 0 a 4 "))
  print(v1[numero])

def C_media():

  numeros = []
  numero = 1
  while numero != 0 :
    numero = int(input("diga um numero inteiro , [0] pra encerrar"))
    if numero != 0 :
     numeros.append(numero)
  media = 0 
  for i in range(len(numeros)):
    media += numeros[i]
  media /= len(numeros)
  print('Number list')
  print(numeros)
  print("media dos numeros : %f" % media) 

def lista_nomes():

  nomes = ["Libra" , "jose" , "Cesar"]
  for indice , nome in enumerate(nomes):
    print(" %d , %s " % (indice + 1 , nome))

def cinema():
  Vag_livres = [10 ,5 ,6 ,8 ,0 ]
  for sala, vaga in enumerate(Vag_livres):
    print("sala %d:  vagas %d "  % (sala + 1, vaga))
  sala = int (input("pra qual sala queres , [0] para sair "))
  while sala != 0 :
    if sala < 0 or sala > 5 :
      print ("INVALIDO")
    elif Vag_livres [sala - 1 ] == 0 :
      print("sala sem vagas")
    else :
      ingressos = int(input(" quantos ingressos queres comprar "))
      if Vag_livres [sala - 1] < ingressos :
        print("nao ha vagas suficientes na sala ")
      else:
        Vag_livres[sala - 1] -= ingressos
        print("%d ingressos vendidos para sala %d. " % (ingressos , vaga))
    for indice , vaga in enumerate(Vag_livres):
      print("sala %d:  vagas %d "  % (sala + 1, vaga))
    sala = int (input("pra qual sala queres , [0] para sair "))

def Nota_alun():
  alunos = []
  nome = input("digite o nome do aluno , enter to finish ")
  while nome != "" :
    n1 = float(input("digite a nota 1 de %s" % nome))
    n2 = float(input("digite a nota 2 de %s" % nome))
    aluno = []
    media = (n1 + n2 ) / 2
    alunos.append(nome)
    alunos.append(media)
    alunos.append(aluno)
    nome = input("digite o nome do aluno , enter to finish ")
  print ("nome            media ")
  for i in range(len(alunos)):
    print("%18s - %1f" % (alunos[i][0] , alunos[i][1]))




Nota_alun()



