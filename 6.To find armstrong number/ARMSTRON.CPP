#include<stdio.h>
#include<conio.h>
void main()
{
int d,num,sum=0,n;
clrscr();
printf("Enter the no.\n");
scanf("%d",&num);
n=num;
while(num>0)
{
d=num%10;
sum=sum+d*d*d;
num=num/10;
}
if(sum==n)
printf("Armstrong no.");
else
printf("not armstrong");
getch();
}