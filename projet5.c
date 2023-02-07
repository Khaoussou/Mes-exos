#include<stdio.h>
#include"khaoussou.h"

void Matrice()

{
        int i,j;
        int matrice[i][j];
        int lign, col;
        
        printf(" Entrez le nombre de lignes: ");
        scanf("%d",&lign);
        printf(" Entrez le nombre de colonne: ");
        scanf("%d",&col);
        printf(" Entrez les %d éléments de tableau: ",lign*col);
        
        for(i = 0; i < lign; i++)
        {
            for(j = 0; j < col; j++)
            {
                scanf("%d",&matrice[i][j]);
            }
        }
        printf("Voici la matrice: \n");
        for(i=0; i < lign; i++)
        {
            for(j = 0; j < col; j++)
            {
                printf("%4d",matrice[i][j]);
            }
             printf("\n");
        }
}