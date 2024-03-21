#include<stdio.h>
void main() {
	int a,b,c,d,e;
	int add;
	int sub;
	int mul;
	int div;
	int avg;
	printf("Enter The 5 numbers :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	add= a+b+c+d+e;
	sub= a-b-c-d-e;
	mul= a*b*c*d*e;
	div= a/b/c/d/e;
	avg= a%b%c%d%e;
	printf("The addtional of 5 numbers is %d\n",add);
	printf("The subraction of 5 numbers is %d\n",sub);
	printf("The multiplication of 5 numbers is %d\n",mul);
	printf("The division of 5 numbers is %d\n",div);
	printf("The average of 5 numbers is %d\n",avg);
	
	
}
