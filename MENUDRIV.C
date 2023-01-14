//menudriven program.
#include<stdio.h>
#include<conio.h>
int n;
//this function will find out factorial of a no
void fact()
{
int f=1;
printf("\nenter a no to find factorial");
scanf("%d",&n);
while(n>0)
{
f=f*n;
n--;
}
printf("\nfactorial of the given no is %d",f);
}
//this function will check whether a given no is pallindrome or not
void pal()
{
int dg,rev=0,t;
printf("\nenter a no to check whether it is pallindrome or not");
scanf("%d",&n);
t=n;
while(t>0)
{
dg=t%10;
rev=rev*10+dg;
t=t/10;
}
if(n==rev)
printf("\nyes the number is a pallindrome no");
else
printf("\nno the number is not pallindrome!!!!plz enter any other no");
}
//this function will find out the sum of the given digits
void sumdig()
{
int dg,sum=0;
printf("\nenter a no to find sum of digits");
scanf("%d",&n);
while(n>0)
{
dg=n%10;
sum=sum+dg;
n=n/10;
}
printf("\nsum of digits=%d",sum);
}
//this function will check whether a no is even/not
void even()
{
printf("\nenter a no to check whether a given no is even/odd");
scanf("%d",&n);
if(n%2==0)
printf("\nit is a even no");
else
printf("\nit is not a even no");
}
//this function will check whether a no is odd/not
void odd()
{
printf("\nenter a no to check whether no is odd/not");
scanf("%d",&n);
if(n%2!=0)
printf("\nit is a odd no");
else
printf("\nit is not a odd no");
}
//this function will check whether the given year is a covid year/not
void covidyear()
{
int year;
printf("\nenter a year to check whether the year is covid year or not");
scanf("%d",&year);
if((year==2020)||(year==2021))
printf("\ncovid year...the most worst year");
else
printf("\nnot a covid year");
}
void main()
{
clrscr();
while(1)
{
int cho;
printf("\n1.To find factorial of a no");
printf("\n2.To check whether a no is pallindrome/not");
printf("\n3.To find sum of digits");
printf("\n4.To check whether a given no is even/not");
printf("\n5.To check whether a no is odd/not");
printf("\n6.To check wheter entered year is covid year/not");
printf("\n7.exit");
printf("\nchoose your choice");
scanf("%d",&cho);
switch(cho)
{
case 1:
fact();
break;
case 2:
pal();
break;
case 3:
sumdig();
break;
case 4:
even();
break;
case 5:
odd();
break;
case 6:
covidyear();
break;
case 7:
exit(1);
default:
printf("invalid option");
}
}
}