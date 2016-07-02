#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i,n,j;
clrscr();
scanf("%d",&n1);
scanf("%d",&n2);
while(n1<n2)
{
n=0;
for(j=2;j<=n1/2;++j)
{
if(n1%j==0)
n=1;
}
if(n==0)
printf("%d",n1);
++n1;
}
getch();
}
