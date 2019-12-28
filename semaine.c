#include <stdio.h>

int main(void)
{
    int jour;
    int mois;

    
    printf("Entrer une date (jj/mm) : \n");
    scanf("%d/%d", &jour , &mois);

        
    int njours = 31 * (mois - 1);
    
    switch (mois)
    {
    case 12:
    --njours;
    case 11:
    case 10:
    --njours;
     case 9:
     case 8:
    case 7:
    --njours;
    case 6:
    case 5:
       --njours;
    case 4:
    case 3:
    njours -= 3;
    
    break;

    }
    
    njours += (jour-1);


    switch (njours % 7)
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
    }

    return 0;
}