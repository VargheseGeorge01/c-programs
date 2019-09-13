#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,limt,c,j;
clrscr();
printf("Enter the limit\n");
scanf("%d",&limt);
printf("The prime no.s are\n");
printf("2\t");
for(j=3;j<=limt;++j)
{
c=1;
for(i=2;i<=sqrt(j);++i)
 {
 if(j%i==0)
   {
   c=0;
   break;
   }
 }
 if(c==1)
 printf("%d\t",j);
}
getch();
}
