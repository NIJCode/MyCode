//
//  main.c
//  Langage C
//
//  Created by Jérémy on 22/12/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <curses.h>
                       

char ja[100], jb[100];      //Nom des Joueurs.
int game;                   //Relancement du jeux.
int A=0, B=0;               //Les dés.
const int MAX = 6, MIN = 1; //Valeur Maximum et Minimum des dés.
int manche = 1;

int press(void) //Création de fonction "Press" pour résoudre le problème de Tape.
{
    getchar();
    getchar();
    return 0;
}

int main(int argc, char** argv)
{
    int resultA, resultB; //Résultat des dés
    int SA = 0, SB = 0;   //Scores

        //Intro du Jeu
    
    while (game != 1) //Boucle pour permettre la relance du jeu.
    {
        printf("\n——————————————————————————————————————\n");
        printf("||                                  ||\n");
        printf("||           Jeu de Dés             ||\n");
        printf("||                                  ||\n");
        printf("——————————————————————————————————————\n\n");
        
        printf("Nom du joueur 1 ?\n");
        printf("—————————————————\n");
        scanf("%s", ja);
        printf("—————————————————\n");
        printf("\nLe nom du joueur 1 est %s.\n\n", ja);
        printf("Nom du joueur 2 ?\n");
        printf("—————————————————\n");
        scanf("%s", jb);
        printf("—————————————————\n");
        printf("\nLe nom du joueur 2 est %s.\n\n", jb);
        
        //Remise à zéro des scores et des manches.
        
        manche = 1;
        SA = 0;
        SB = 0;

        //Corps du Jeux
        
        do
        {
            //Génération de chiffre aléatoire pour les dés.
            srand(time(NULL));
            A = (rand() % (MAX - MIN + 1)) + MIN;
            B = (rand() % (MAX - MIN + 1)) + MIN;
            
            printf("————————————    Manche %d    ————————————\n\n", manche);
            printf("%s commence !\nPresse ENTER pour continuer...\n", ja);
            press();                                                        //Appel de la fonction "Getchar" à travers la fonction "Press".
            printf("Dé N°1 : %d\n", A);
            printf("Dé N°2 : %d\n", B);
            resultA = A + B;
            printf("%s à obtenu %d\n\n", ja, resultA);
            
            srand(time(NULL));
            A = (rand() % (MAX - MIN + 1)) + MIN;
            B = (rand() % (MAX - MIN + 1)) + MIN;
            
            printf("Au tour de %s de jouer !\nPresse ENTER pour continuer...\n", jb);
            getchar();
            printf("Dé N°1 : %d\n", A);
            printf("Dé N°2 : %d\n", B);
            resultB = A + B;
            printf("%s à obtenu %d\n\n", jb, resultB);
            
            if (resultA > resultB)
            {
                printf("%s remporte la manche !\n\n", ja);
                SA++;
                printf("————————————————————————————————————————\n");
                printf("||               Scores               ||\n");
                printf("————————————————————————————————————————\n\n");
                printf("—————————————————\n");
                printf("%s : %d points\n—————————————————\n%s : %d points\n", ja, SA, jb, SB);
                printf("—————————————————\n\n");
            }
            else if (resultA < resultB)
            {
                printf("%s remporte la manche !\n\n", jb);
                SB++;
                printf("————————————————————————————————————————\n");
                printf("||               Scores               ||\n");
                printf("————————————————————————————————————————\n\n");
                printf("—————————————————\n");
                printf("%s : %d points\n—————————————————\n%s : %d points\n", ja, SA, jb, SB);
                printf("—————————————————\n\n");
            }
            else
            {
                printf("Egalité !\n\n");
                printf("————————————————————————————————————————\n");
                printf("||               Scores               ||\n");
                printf("————————————————————————————————————————\n\n");
                printf("—————————————————\n");
                printf("%s : %d points\n—————————————————\n%s : %d points\n", ja, SA, jb, SB);
                printf("—————————————————\n\n");
            }
            
            manche++;
        } while (manche != 6);
        
        if (manche != 5 && SA > SB)
        {
            printf("%s remporte la partie avec %d - %d !!!\nEn 5 manches !\n\n", ja, SA, SB);
        }
        else if (manche != 5 && SB > SA)
        {
            printf("%s remporte la partie avec %d - %d !!!\nEn 5 manches !\n\n", jb, SB, SA);
        }
        else if (manche != 5 && SA == SB)
            printf("Match nul !!!\n\n");
        
        //Fin du Jeu
        
        printf("Voulez-vous rejouer ?\n1. Non\n2. Oui\n");
        scanf("%d", &game);
        printf("\n\n");

    }
    return 0;
}
