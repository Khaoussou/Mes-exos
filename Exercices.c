#include<stdio.h>
#include"khaoussou.h"

int main()
{
    int choix_menu , choix;

    printf("Pour l'exercice 4, tapez: 4 \n");
    printf("Pour l'exercice 5, tapez: 5 \n");
    printf("Pour l'exercice 6, tapez: 6 \n");
    printf("Pour l'exercice 7, tapez: 7 \n");
    printf("Pour l'exercice 8, tapez: 8 \n");
    printf("Pour l'exercice 9, tapez: 9 \n");
    printf("\n");
    printf("Faites un choix: ");
    scanf("%d",&choix_menu);
    getchar();

        switch (choix_menu)
        {
        case 4:

            printf("\nVoici le traitement de l'exercice 4:\n");
            
            printf("\nVoici l'exercice\n");
            traitement();
               
            break;


        case 5:
            printf("\nVoici le traitement de l'exercice 5:\n");
            void Matrice();

            break;


        case 6:
            printf("\nVoici le traitement de l'exercice 6:\n");

            break;


        case 7:
            printf("\nVoici le traitement de l'exercice 7:\n");

            break;


        case 8:
            printf("\nVoici le traitement de l'exercice 4:\n");

            break;

        case 9:
            printf("\nVoici le traitement de l'exercice 9:\n");

            break;

        
        default:
            printf("Votre chiox n'est pas dans le menu.");
            break;
        }
}