#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("The value of a and b before swapping %d %d",a,b);
	a=a+b; //10+20=30
	b=a-b; //30-20=10
	a=a-b; //30-10=20
	printf("The value of a and b after swapping %d %d",a,b);
	return 0;
}
