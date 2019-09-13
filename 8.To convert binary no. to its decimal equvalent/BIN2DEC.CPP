#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int dec=0,d,i=0;
long int bin;
clrscr();
printf("Enter binary no.\n");
scanf("%ld",&bin);
do
{
d=bin%10;
dec=dec+d*pow(2,i);
++i;
bin=bin/10;
}
while(bin>0);
printf("The decimal no. is %d",dec);
getch();
}