#include<stdio.h>

int main (void)
{
    int score;

    printf("Quel est le score du joueur ?");
    scanf("%d" , &score);

    if(score<2000)
    {
        printf("C'est la catastrophe");
    }

    else if(score>=2000 && score<5000) {
        
        printf("Tu peux mieux faire ! \n");
    }

    else if(score>=5000 && score<9000) {

        printf("Tu es sur la bonne voie ! \n");
    }

    else {
        printf("Tu es le meilleure ! \n");
    }
    
    return 0;
}