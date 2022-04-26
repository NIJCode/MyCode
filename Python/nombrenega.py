from os import system


system("clear")

a = float(input("Veuillez entrer un nombre ?\n"))

if a == 0:
    print("votre nombre est égale à zéro !\n")
if a < 0:
    print("Votre nombre est négatif !\n")
if a > 0:
    print("Votre nombre est supérieur à zéro !\n")
if a != 10:
    print("votre nombre est différent de 10 !\n")
else :
    print("votre nombre est égale à 10 !\n")
    
calc = a%2

if calc == 0:
    print("le nombre est paire !")
else :
    print("le nombre est impaire !")