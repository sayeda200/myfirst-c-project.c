#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the alue of a,b,c\n")
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
{
    printf("a is big\n");
}
else
{
    printf("c is big\n");
   }
}
else
{
    if(b>c)
{
    printf("b is big");
}
else
{
    printf("c is big");
}
}
}
