//mathematical calculation using function
#include<stdio.h>
#include<conio.h>
//function declaration
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);
//function definition
void add(int a,int b)
{
    int c;
	c=a+b;
	printf(" the sum of two numbers is %d\n",c);
}
void sub(int a,int b)
{
    int c;
	c=a-b;
	printf(" the difference of two numbers is %d\n",c);
}

void mul(int a,int b)
{
    int c;
	c=a*b;
	printf(" the multiplication of two numbers is %d\n",c);
}
void div(int a,int b)
{
    int c;
	c=a/b;
	printf(" the division of two numbers is %d\n",c);
}
int main()
{
	add(8,5);
	sub(8,5);
	mul(8,5);
	div(8,5);
}
