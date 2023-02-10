#include<stdio.h>
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
int main()
{
    char lettre[50];
    printf("Donner une chaine de caractere: ");
    scanf("%[^\n]",lettre);

    //int con = conversion(lettre);
    int c, l, chiffre, nf = 0 ;

    for( int i = 0 ; i < chaine(lettre) ; i ++ )
    {
      /*  int n = 0 ;
        if (lettre[i] == ' ')
        {
            n = (int)lettre[i] ;  
            c = n - 97 + 65 ;
          //  l = 00 ; 
        }
        else
        {
            l = (int)lettre[i] ;
          //  n = (int) ' ' - 65;
            c = l - 97 ;
        }*/
       
       // printf("%d", c);
      
       l = (int)lettre[i] ;
        c = l - 96 ;
        if (l >= 97 && l <= 99)
        {
            chiffre = 2;
            nf = c;
           printf("%d%d", chiffre, nf);
         // printf("%d",nf);
        }
        
    }

}
/*
int conversion(char lettre)
{
    int i,j;
    char num[9][4] =
                {
                    {'0','0','0','0'},
                    {'A','B','C','0'},
                    {'D','E','F','0'},
                    {'G','H','I','0'},
                    {'J','K','L','0'},
                    {'M','N','O','0'},
                    {'P','Q','R','S'},
                    {'T','U','V','0'},
                    {'W','X','Y','Z'}
                };

        for( i = 0 ; i < 9 ; i ++)
        {
            for( j = 0 ; j < 4 ; j ++)
            {

            }
        }
    return lettre;
}*/