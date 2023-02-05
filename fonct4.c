#include<stdio.h>
#include"fonction.h"

int main()
{
    int jour,mois,a;

    do
        {
            printf("Donner un jour, un mois et une annee valides: \n");
            scanf("%d %d %d",&jour,&mois,&a);
        }
    while ( jour<=0 || jour > 31 || mois<1 || mois>12 || a<=0);

    date_suivante(jour,mois,a);

     //   printf("Voici la date suivante:",date_suivante);
        
}