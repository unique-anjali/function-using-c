#include<stdio.h>
#include<conio.h>
void display(int a);   //function declaration
void display(int a)  // function definition
{
	printf("the value of a is %d",a);
}
void main()
{
	int a;
	display(5);    //function call

}

