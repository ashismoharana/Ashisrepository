#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1;
clrscr();
printf("enter a no");
scanf("%d",&n);
for(;n>0;n--)
{
fact=fact*n;
}
printf("factorial=%d",fact);
getch();
}