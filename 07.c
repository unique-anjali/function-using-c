//function with return type and no parameter 
#include<stdio.h>
#include<conio.h>
int add()
{
	int a=2,b=10,c;
	c=a+b;
	return c; 
}
int main()
{
    int rs=add();
    printf("addition is %d",rs);
   
}

