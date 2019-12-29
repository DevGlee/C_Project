#include <stdio.h>

int main(void)
{
    int jour;
    int mois;
    int annee;

    printf("Entrer une date (jj/mm/aaaa) : \n");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    int njours = 365 * (annee - 1);

    if (annee > 1582) /* Calendrier Grégorien*/
    {
        njours += ((annee - 1) / 4);
        njours -= ((annee - 1) / 100);
        njours += ((annee - 1) / 400);
        njours += 2;
    }
    else /*Calendrier Julien*/
    {
        njours = ((annee - 1) / 4);
    }

    njours += (mois - 1) * 31;

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
        if (annee > 1582)
        {
            if (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0))
                njours -= 2;
            else
                njours -= 3;
        }
        else
        {
            if (annee % 4 == 0)
                njours -= 2;
            else
                njours -= 3;
        }
        break;
    
}

njours += (jour - 1);

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