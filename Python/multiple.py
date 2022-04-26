nbr = float(input("Entrez un Nombre : "))
if nbr%5 == 0 and nbr%4 == 0:
    print("Votre nombre est un multiple de 4 et 5 !")
elif nbr%4 == 0:
    print("Votre nombre est un multiple de 4 !")
elif nbr%5 == 0:
    print("Votre nombre est un multiple de 5 !")
else:
    print("Votre nombre n'est pas un multiple de 5 et de 4 !")
    
    