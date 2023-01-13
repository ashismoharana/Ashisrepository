#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
int i,len,temp=0;
clrscr();
printf("enter a string");
scanf("%s",&str);
len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]!=str[len-i-1])
{
temp++;
break;
}
}
if(temp==0)
printf("string is pallindrome");
else
printf("string is not pallindrome");
getch();
}