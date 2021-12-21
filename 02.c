#include<stdio.h>
#include<conio.h>
void goodmorning();     //function declaration
void goodafternoon();
void goodevening();
int main()
{
	goodmorning();   //function call
    goodafternoon();
    goodevening();	
	return 0;
}
void goodmorning()   // function definition

{
	printf("good morning Anjali!\n");	
}
void goodafternoon()
{
	printf("good afternoon Anjali!\n");
	
}
void goodevening()
{
	printf("Good evening Anjali!");
}
