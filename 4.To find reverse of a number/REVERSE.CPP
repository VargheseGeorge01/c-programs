#include<stdio.h>
#include<conio.h>
void main()
{
int d,num,rev=0;
clrscr();
printf("Enter the number\n");
scanf("%d",&num);
while(num>0)
{
d=num%10;
rev=rev*10+d;
num=num/10;
}
printf("The reverse is %d",rev);
getch();
}

