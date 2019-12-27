#include<stdio.h>

int main (void) 

{
    int hit;

    printf("Rentrer le nombre de coup exacte");
    scanf("%d" , &hit);

    if(hit<2) 
    {
        printf("Vous avez effectuer %d  coup" , hit);

    }
    else 
    {
        printf("Vous avez effectuer %d  coups" , hit);
    }

    return 0;
}