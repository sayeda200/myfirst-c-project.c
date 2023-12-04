#include<stdio.h>
#include<math.h>
int main()
{
float x,p;
int y,a,b,q,r;
printf("enter the value of x\n");
scanf("%f",&x);
p=sqrt(x);
printf("the squareroot of x is=%f\n",p);
printf("enter the value of y\n");
scanf("%d",&y);
q=abs(y);
printf("absolute value of y is=%d\n",q);
printf("enter the value of a and b \n");
scanf("%d%d",&a,&b);
r=pow(a,b);
printf("power of a and b is=%d\n",r);
}