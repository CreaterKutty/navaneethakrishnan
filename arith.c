#include<stdio.h>
void main()
{
int a,b,add,sub,mul,div,mod;
printf("enter a two values: ");
scanf("%d %d",&a,&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
int avg = add/2;
int average = (add+sub+mul+div+mod)/5;
printf("the added two number is: %d\n",add);
printf("the subracted two number is: %d\n",sub);
printf("the multiplied two number is: %d\n",mul);
printf("the divided two number is: %d\n",div);
printf("the remainder of two number is: %d\n",mod);
printf("the average of all number is: %d\n",average);
}

