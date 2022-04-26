mot = input('Entrez un mot : ') #Demande à l'utilisateur un mot
lettre = set('a') #Variable à comparer avec le mot entrer par l'utilisateur
for a in mot: 
    if a in lettre: #Vérification du mot avec lettre
        print('oui')
    else :
        print('Non')