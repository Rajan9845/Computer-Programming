#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a number");
scanf("%d",&a);
printf("enter a number");
scanf("%d",&b);
c=a%b;
printf("the input values of %d & %d is\n",a,b);
printf("the result of c after the division of two input numbers a and b =%.2d\n",c);
}
