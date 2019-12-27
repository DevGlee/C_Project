#include<stdio.h>

int main (void) {

    int note;
    
    printf("Quel est ta note sur 20 \n");
    scanf("%d" , &note);

    switch(note)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:

        printf("Bof \n");

        break;

        case 6:
        case 7:
        case 8:
        case 9:
        
        printf("Poursuivez vos efforts \n");

        break;

        case 10:
        case 11:
        case 12:

        printf("Passable \n");

        break; 

        case 13:
        case 14:
        case 15:

        printf("Bien \n");

        break;
        case 16:
        case 17:
        
        printf("Très bien \n");

        break;

        case 18:
        case 19:
        case 20:

        printf("Excellent \n");

        break;

        default:

        printf("Absent \n");

        break;
    }

    return 0;
}