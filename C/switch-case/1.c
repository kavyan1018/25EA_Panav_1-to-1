#include<stdio.h>
#include<conio.h>

void main(){

    int num;
    clrscr();
    printf("Enter the number between 1 to 7: ");
    scanf("%d", &num);

    switch(num){

        case 1:
            printf("\n Monday");
            break;

        case 2:
            printf("\n Tuesday");
            break;
        
        case 3:
            printf("\n Wednesday");
            break;

        default:
            printf("\n Invalid input");
    }
    getch();
}