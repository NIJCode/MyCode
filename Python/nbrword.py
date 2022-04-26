mot = input('Entrez un mot d\'au moins 5 caractères :')
while len(mot) < 5:
    mot = input('Veuillez réessayer votre mot ne comporte pas au moins 5 caractères :\n')
print('La deuxième lettre de votre mot est :',mot[1],'et les 4 premières lettre sont :',mot[:4])