#include<stdio.h>

int main (void) {

    int nb1;
    int nb2;
    printf("Bonjour \n");
    printf("Saisissez le premier nombre : \n");
    scanf("%d", &nb1);
    printf("Saisissez le deuxieme nombre :\n");
    scanf("%d", &nb2);
    printf("\t %d + %d = %d\n", nb1,nb2,nb1+nb2);
    printf("\t %d - %d = %d\n", nb1,nb2,nb1-nb2);
    printf("\t %d * %d = %d\n", nb1,nb2,nb1*nb2);
    printf("\t %d / %d = %.3f\n", nb1,nb2,nb1/(double)nb2);
    printf("Au revoir \n");

    return 0;


}