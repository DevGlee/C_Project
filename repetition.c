#include <stdio.h>

int main(void)
{
    unsigned nb;

    printf("Choisissez un chiffre entre 1 et 10 ! \n");
    scanf("%u", &nb);

    switch (nb)
    {
    case 10:
        printf("Je suis DevGlee ! \n");
    case 9:
        printf("Je suis DevGlee ! \n");
    case 8:
        printf("Je suis DevGlee ! \n");
    case 7:
        printf("Je suis DevGlee ! \n");
    case 6:
        printf("Je suis DevGlee ! \n");
    case 5:
        printf("Je suis DevGlee ! \n");
    case 4:
        printf("Je suis DevGlee ! \n");
    case 3:
        printf("Je suis DevGlee ! \n");
    case 2:
        printf("Je suis DevGlee ! \n");
    case 1:
        printf("Je suis DevGlee ! \n");
    case 0:
        break;

    default:
        printf("Certes mais encore !");
        break;
    }
}