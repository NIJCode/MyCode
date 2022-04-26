mot = input("entrez un mot:")
compteur = 0
voyelles = set("aeiouyAEIOUY") 
for lettre in mot: 
    if lettre in voyelles: 
        compteur += 1      
print("Nombres de voyelles :", compteur) 
      
  
