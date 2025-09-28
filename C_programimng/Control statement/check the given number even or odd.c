#include<stdio.h>
#include<conio.h>
int main()
{
int No=0;
up:
printf("\n Enter a number( check EVEN or ODD)=");
scanf("%d",&No);
if(No%2==0)
{
    printf("\n Entered number is EVEN");
    goto up;
}
else
{
    printf("\n Entered number is ODD");
}
getch();
return 0;
}
