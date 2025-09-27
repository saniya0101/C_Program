#include<stdio.h>
#include<conio.h>

int main()
{
int NO=0, sum=0, i=0;
for (i=1; i<=7; i++)
{
    printf("\n Enter number %d",i);
    scanf("%d",&NO);
    sum=sum+NO;
}
printf("\n\n addition of given number=%d",sum);
getch();
return 0;
}
