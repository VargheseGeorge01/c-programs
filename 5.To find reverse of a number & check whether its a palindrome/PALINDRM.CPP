#include<stdio.h>
#include<conio.h>
void main()
{
int n,d,num,rev=0;
clrscr();
printf("Enter the no\n");
scanf("%d",&num);
n=num;
while(num>0)
{
d=num%10;
rev=rev*10+d;
num=num/10;
}
if(rev==n)
printf("Palindrome");
else
printf("Not Palindrome");
getch();
}
