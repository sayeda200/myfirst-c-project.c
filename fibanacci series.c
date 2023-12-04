#include<stdio.h>
int main()
{
int f1,f2,f3,n;
f1=0;
f2=1;
printf("enter the value of n\n");
scanf("%d",&n);
printf("the fibanocci series is\n");
for(int i=1; i<n; i++)
{
printf("%d\n",f1);
f3=f2+f1;
f1=f2;
f2=f3;
}
}