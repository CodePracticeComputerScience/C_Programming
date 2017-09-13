# include <stdio.h>
# include <stdlib.h>

//defining a function before main and then calling it.
/* 
void FunctionToPrint ()
{
	printf("Function1\n");
	printf("sum = %d\n",4 + 5);
}

int main()

{
	//calling a function
	FunctionToPrint ();
}
 */
 
 //defining a function after main and then calling it.
 // error 
 
 /* int main()
 {
	 FunctionToPrint();
 }
 
 void FunctionToPrint()
 {
	 printf("Function1\n");
	 printf("sum = %d\n",4 + 5);
	 
 } */
 
 //declaring a function before main and then calling it in main ,and then defining function.
 //prototyping a function.
 //declaration of a function
 
 void FunctionToPrint();
 
 
 // main function
 int main()
 {
	FunctionToPrint();
 }
 
 //function definition
 
void FunctionToPrint()
{
	printf("Function1\n");
	printf("sum = %d\n",4 + 5);
 
}