#include <stdio.h>
#include "khaoussou.h"

int chaine(char ch[])
{
    int i,l;
    l=0;
        for(i=0; ch[i] != '\0' ; i++)
        {
            l=l+1;
        }
        
        return l;
}

int initial(char numb[])
{
    int i;

        for( i=0 ; numb[i] != '\0' ; i++)
        {
            if  (numb[0] == '7' && (numb[1] == '7' || numb[1] == '8' || numb[1] == '6' || numb[1] == '0' || numb[1] == '5'))
            {
                return 1;
            }
        }

    return 0;
}

void espace(char numb[])
{
    for(int i = 0 ; i < chaine(numb) ; i++ )
    {
        if( numb[i] == ' ')
        {
            for(int j = i ; j < chaine(numb) ; j++ )
                
                numb[j]=numb[j+1];
        }
    }
}

int caractere(char numb[])
{

        for(int i = 0 ; numb[i] != '\0' ; i++)
        {
            if ( ! ( numb[i] >= '0' && numb[i] <= '9'))
            {
                return 0;
            }

        }

     return 1;
        
}

int nbr_chiffre(char numb[])
{
        if( chaine(numb) == 9 )
        {
            return 1;
        }
        return 0;
}

void ennonce()
{
    printf ( "Ecrire un programme qui permet de remplir N numéros à"
            "partir d une chaîne. Le programme ré-affiche les numéros"
            "valides à gauche et les numéros invalides à droite de"
            "l écran. Le programme affichera aussi le nombre de"
            "numéros de chaque opérateur");
}

/*void retirer(char val[], char numb[], int debut, int fin)
{
    int i;
    for ( i = debut ; i < fin ; i++)
    {
        val[i]=numb[i];
    }

}*/

void traitement()
{
    ennonce();
    char numero[100];
    char val[100];
    int i,d,f;
    printf("\nDonner une chaine de n numeros \n");
    printf("\nTout les numeros sont separes par des '_' \n");
    scanf("%[^\n]", numero);
    getchar();
    for( i = 0 ; i < chaine(numero) ; i++)
    {
        d=i;
        while ( numero[i] == '_')
        {
            espace(numero);

            if( initial(val) && caractere(val) && nbr_chiffre(val))
            {
                printf("Voici les bon numeros %s\n",val);
            }
            else
                printf("Voici les mauvais numeros %s\n",val);
                
                i++;
        }
                printf("%d\n",i);
        
    }   

}
   
