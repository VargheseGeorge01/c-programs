#include<stdio.h>
#include<conio.h>
void main()
{
int num,d,sum=0;
clrscr();
printf("Enter the no.\n");
scanf("%d",&num);
while(num>0)
{
 d=num%10;
 sum=sum+d;
 num=num/10;
}
printf("The sum of digit is %d",sum);
getch();
}