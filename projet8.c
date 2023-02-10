#include<stdio.h>
#include<stdlib.h>
#include"khaoussou.h"
#include"Projet8.h"

/**/

/*void Saisi_etudiant()
{
    int i;
    struct Personne tab[5];

    printf("Donner les informations des 5 etudiants du tableau");

        for( i = 0 ; i < 2 ; i ++ )
        {
            printf("\nDonner le nom: ");
            scanf("%s",tab[i].nom);
            printf("\nDonner le prenom: ");
            scanf("%s",tab[i].prenom);
            printf("\nDonner la classe: ");
            scanf("%s",tab[i].classe);
            printf("\nDonner le telephone: ");
            scanf("%s",tab[i].telephone);
        }

    return 0;
}
*/




int main()
{
    char note1[10];
    char note2[10];

    printf("Donner une note: ");
    scanf("%s",note1);
    printf("Donner une note: ");
    scanf("%s",note2);
    control_saisi(note1);
    control_saisi(note2);
    printf("\nVoici la note avant convertion %s %s \n",note1,note2);
    conversion(note1);
    conversion(note2);

    float som = 0 ;
    som = strtof(note1, NULL) + strtof(note2, NULL) ;

    printf("Voici le resultat %.2f ",som);
}