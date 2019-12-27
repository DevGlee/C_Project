#include<stdio.h>

int main (void)
{
    int jour;
    
    /*  LUNDI ==2
        MARDI ==3
        MERCREDI ==4
        JEUDI ==5
        VENDREDI ==6
        SAMEDI ==0
        DIMANCHE ==1*/

    printf("Donner un jour \n");
    scanf("%d", &jour);

        jour=(jour-1)%7;
        printf("Le reste est %d \n", jour);

    switch (jour)
    {
        case 0:
        printf("Nous sommes samedi ! \n");
        break;
        case 1:
        printf("Nous sommes dimanche ! \n");
        break;
        case 2:
        printf("Nous sommes lundi ! \n");
        break;
        case 3:
        printf("Nous sommes mardi ! \n");
        break;
        case 4:
        printf("Nous sommes mercredi ! \n");
        break;
        case 5:
        printf("Nous sommes jeudi ! \n");
        break;
        case 6:
        printf("Nous sommes vendredi ! \n");
        break;
    
    default:
        break;
    }
    
    
    
    return 0;
    
}