#include<stdio.h>
#include<stdlib.h>
#include"khaoussou.h"
#include"Projet8.h"

/*int tri_affichage(float devoir,float projet,float exam)
{
    float moy;
}
*/


// void resultat()
typedef struct Personne etudiants;
struct Personne
{
    char nom[50];
    char prenom[100];
    char telephone[10];
    char classe[5];
    char devoir[10];
    char projet[10];    
    char exam[10];
    float moy;
    
};

int num_valide (char ch[])
{
    espace(ch);

        if (initial(ch) && caractere(ch) && nbr_chiffre(ch))
        {
            return 1;
        } 

    return 0;
}

char numero(char telephone[])
{
    while (!(num_valide(telephone)))
    {
        printf("\nDonner le telephone: ");
        scanf("%s",telephone);
    }
    
}

void conversion(char note [])
{

        for( int i = 0 ; i < chaine(note) ; i ++)
        {
            if ( note[ i ] == ';' ) 
            {
                note[ i ] = '.' ;
            }
        }
}

float control_saisi(char note [])
{
    
    while (strtof(note, NULL) < 0 || strtof(note, NULL) > 20)
    {
        printf("Donner une note: ");
        scanf("%s",note);
    }
}

void afficche (char tableau [] )
{
    int i ;
    float som , p , e , d ;
    etudiants tab[2] ;
    FILE * fichier = fopen("fichier.txt","a");

    printf("Donner les informations des 5 etudiants de la classe");

        for( i = 0 ; i <  2 ; i ++ )
         //  som = 0;
        {
            printf("\nDonner le nom: ");
            scanf("%s",tab[i].nom);
            printf("\nDonner le prenom: ");
            scanf("%s",tab[i].prenom);
            printf("\nDonner le telephone: ");
            scanf("%s",tab[i].telephone);
            numero(tab[i].telephone);
            printf("\nDonner la classe: ");
            scanf("%s",tab[i].classe);
            printf("\nDonner la note de devoir: ");
            scanf("%s",tab[i].devoir);
            d = control_saisi(tab[i].devoir);
            conversion(tab[i].devoir);
            printf("\nDonner la note du projet: ");
            scanf("%s",tab[i].projet);
            p = control_saisi(tab[i].projet);
            conversion(tab[i].projet);
            printf("\nDonner la note de l'exam: ");
            scanf("%s",tab[i].exam);
            e = control_saisi(tab[i].exam);
            conversion(tab[i].exam);

            som = d + p + e ;
            tab[i].moy = som / 3 ;
            fprintf(fichier, "%s-%s-%s-%s-%s-%s-%s-%.2f\n",tab[i].nom,tab[i].prenom,tab[i].telephone,tab[i].classe,tab[i].devoir,tab[i].projet,tab[i].exam,tab[i].moy);
        }
        fclose(fichier);
        printf("\nVoici la liste des etudiants:\n");
        
        printf("_________________________________________________________________________________________________________________________");
        printf("\n\nNom\t\t|Prenom\t\t|telephone\t|Classe\t\t|Devoir\t\t|Projet\t\t|Exam\t\t|Moyenne|");
        // printf("\n\n\t\t|\t\t|\t\t|\t\t|\t\t|\t\t|\t\t|\t\t|");
        printf("\n_________________________________________________________________________________________________________________________\n");
        for( i = 0; i < 2 ; i ++ )
        {

            printf("\n%-10s\t | %-10s\t | %s\t | %-10s\t | %-10s\t | %-10s\t | %-10s\t | %.2f |",
                
                tab[i].nom, tab[i].prenom, tab[i].telephone, tab[i].classe, tab[i].devoir, tab[i].projet, tab[i].exam, tab[i].moy);
            printf("\n_________________________________________________________________________________________________________________________\n");
        }
}
int main()
{
    char tab [2] ;

    afficche(tab) ;
}

