vitesse = float(input('Vitesse ='))

if vitesse < 100:
    vitesse - 5
else:
    vitesse * 0.95

print ('votre vitesse est de', round(vitesse, 0))