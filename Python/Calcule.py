#affichage IMC

#Toutes les entré
poids = float(input('Poids en KG ='))
taille = float(input('taille en M ='))

#Les calcules
t = taille*taille
IMC = poids/t

#affichage du resultat
print('Votre IMC est de', round(IMC, 1))

#Indication en fonction du resultat
if IMC < 25:
    print('Vous êtes en bonne santé')

else:
    print('Faites attention !')
