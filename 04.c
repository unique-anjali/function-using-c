//area of rectangle using function
#include<stdio.h>
#include<conio.h>
void area();
void area()
{
	int a,l=2,b=3,h=4,r=2.1;
	a=l*b;
	printf("area of rectangle is %d\n",a);
	a=3.14*r*r*h;
	printf("area of circle is %d\n",a);
	return 0;
	
}
int main()
{
	area();
}
