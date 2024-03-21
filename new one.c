#include<stdio.h>
void  main() {
	int a,b;
	int add;
	int sub;
	int mul;
	int div;
	int avg;
	printf("enter a numbers 2 number");
	scanf("%d%d",&a,&b);
	add= a+b;
	sub= a-b;
	mul= a*b;
	div= a/b;
	avg= a%b;
	printf("The additional of 2 number is %d\n",add);
	printf("the subraction of 2 number is %d\n",sub);
	printf("the multiplication of 2 number is %d\n",mul);
	printf("the division of 2 number is %d\n",div);
	printf("the average of 2 number is %d\n",avg);
	
}
