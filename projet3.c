#include <stdio.h>

void espace(char phrase[])
{
   
    int i=0;

    while(phrase[0] == ' ')
    {
        for( i=0 ; phrase[i] != '\0' ; i++)
        {
            phrase[i]=phrase[i+1];
        }
    }
}

int majuscule(char phrase[])
{
    int i=0;
    if( phrase[0]>='A' && phrase[0]<='Z' )
    {
        return 1;   
    }
        return 0;
}