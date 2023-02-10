#include<stdio.h>
#include"khaoussou.h"

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

void controle (int chiffre, int nf)
{
    for(int i = 0 ; i < nf ; i++)
        {
            printf("%d",chiffre);
        }
}

int conversion_lettre (char chn [])
{
    int i,l,chiffre,nf,c;

    for( int i = 0 ; i < chaine(chn) ; i ++ )
    {
        l = (int)chn[i] ;
        if( l>= 65 && l <= 90 )
        {
            l=l+32;
        }
        c = l - 96 ;
        if (l >= 97 && l <= 99)
        {
            
            chiffre = 2;
            nf = c;
        }
        else if (l >= 100 && l <= 102 )
        {
            
            chiffre = 3;
            nf = c - 3 ;

        }
        else if (l >= 103 && l <= 105 )
        {
            
            chiffre = 4;
            nf = c - 6 ;

        }
        else if (l >= 106 && l <= 108 )
        {
            
            chiffre = 5;
            nf = c - 9 ;

        }
        else if (l >= 109 && l <= 111 )
        {
            
           
            chiffre = 6;
            nf = c - 12 ;

        }
        else if (l >= 112 && l <= 115 )
        {
            
          
            chiffre = 7;
            nf = c - 15 ;
        }
        else if (l >= 116 && l <= 118 )
        {
           
            chiffre = 8;
            nf = c - 18 ;
        }

        else 
        {
            
            chiffre = 9;
            nf = c - 22;
        }

        controle(chiffre,nf);
    }
}

void Affiche()
{
    char phr[50];
    int chiffre,nf;
    printf("Donner une phrase: ");
    scanf("%[^\n]",phr);
    conversion_lettre(phr);
}
