#include<stdio.h>
#include<conio.h>
void main()
{
int i,s,a,b,hcf=1;
clrscr();
printf("Enter two no.s\n");
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
  hcf=hcf*i;
  a=a/i;
  b=b/i;
 }
 --i;
}
printf("HCF is %d",hcf);
getch();
}