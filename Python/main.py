#Calculette simple

from os import system
system("clear")

nb1 = float(input("Votre premier nombre : "))
nb2 = float(input("Votre deuxième nombre : "))
result = float

print("1. +")
print("2. -")
print("3. *")
print("4. /")

choice = int(input("Que choisissez vous de faire ?\n"))

if choice == 1:
    result=nb1+nb2
    print(nb1,"+", nb2,"=", result)
if choice == 2:
    result=nb1-nb2
    print(nb1,"-", nb2,"=", result)
if choice == 3:
    result=nb1*nb2
    print(nb1,"*", nb2,"=", result)
if choice == 4:
    result=nb1/nb2
    print(nb1,"/", nb2,"=", result)
    