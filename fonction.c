int bissextile(int a)
{
    int bis;

        if( a%400 == 0 || (a%4 == 0 && a%100 != 0))
        {
           bis=1;
        }
        else
            bis=0;

    return bis;
}

int nbrjour(int m,int an)
{
    int jr;
    int bis=bissextile(an);

        if (m == 2)
        {
            if(bis)
            {
                jr=29;
            }
            else
            {
                jr=28;
            }
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            jr=31;
        }
        else
            jr=30;
    return jr;
}

int date_valide (int jr,int m,int a)
{
    int jour;

        if(jr <= nbrjour(m,a))
        {
            jour=1;
        }
        else
            jour=0;
            
    return jour;
}

void date_suivante(int jr,int m,int an)
{

        if(date_valide(jr,m,an))
        {
            jr++;
            if (jr > nbrjour(m,an) )
            {
                jr=1;
                m++;
            }
            if (jr > nbrjour(m,an) && m == 12)
            {
                jr=1;
                m=1;
                an++;
            }      
        }   
    printf("Afficher la date suivante: %d-%d-%d",jr,m,an);
}

int som_div(int n)
{
    int som=0;

        for(int i=1;i<=n;i++)
        {
            if (n % i == 0)
            {
                som=som+i;
            }   
        }

    return som;
}

int nbr_ami(int nbr1,int nbr2)
{
    int som1,som2;

        som1=som_div(nbr1);
        som2=som_div(nbr2);

    if( ((som1-1-nbr1) == nbr2) && ((som2-1-nbr2) == nbr1) )
       
        return 1;
    
    else

        return 0;
}

void espace(char phrase[])
{
   // char phrase1 [chaine(phrase)];
  //  int j=0;
   
    int i=0;

    while(phrase[0] == ' ')
    {
        for( i=0 ; phrase[i] != '\0' ; i++)
        {
            phrase[i]=phrase[i+1];
        }
    }
}
