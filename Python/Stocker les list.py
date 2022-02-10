import numpy as np
import matplotlib.pyplot as plt
element =['H','He','autres']
valeurs = [90,9,1]
plt.bar(element,valeurs)
plt.xlabel('elements chimiques')
plt.ylabel('%')
plt.show()