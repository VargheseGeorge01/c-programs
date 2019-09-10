#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,s,i,lcm=1;
clrscr();
printf("Enter the 2 no.s\n");
scanf("%d%d",&a,&b);
if(a>b)
s=b;
else
s=a;
i=s;
while(i>=1)
{
if((a%i==0)&&(b%i==0))
{
lcm=lcm*i;
a=a/i;
b=b/i;
}
i--;
}
lcm=lcm*a*b;
printf("The lcm is %d",lcm);
getch();
}