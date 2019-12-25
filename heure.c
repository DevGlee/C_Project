#include<stdio.h>

int main(void)
{
    int heure;

    scanf("%d", &heure);
    
    if(heure>6 && heure<20)
    {
        printf("Il fait jour \n");
    }
    else
    {
        printf("Il fait nuit \n");
    }
    return 0;
}