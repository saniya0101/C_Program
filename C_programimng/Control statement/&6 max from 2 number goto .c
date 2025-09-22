#include<stdio.h>
#include<conio.h>
int main()
{
    int NO1=0, NO2=0;
    UP:
    printf("\n Enter number of 2 integer \n");

    printf("\n Enter number 1:");
    scanf("%d",&NO1);
    printf("\n Enter number 2:");
    scanf("%d",&NO2);
    (NO1==NO2)? printf("\n Enter number is both the same"):(NO1>NO2)? printf("\n Enter 1st number %d is maximum",NO1):printf("\n Enter 2nd number %d is maximum",NO2);
    goto UP;
    getch();
    return 0;
}

