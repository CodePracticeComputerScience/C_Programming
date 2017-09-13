# include <stdio.h>
# include <stdlib.h>

/* void Sum(int a,int b)\\void keyword means function is not returning anything.
{
	int sum = a + b;
	printf("%d",sum);
	
}

int main()
{
	Sum(34,45);
}
 */

/* void remainder(int a,int b)
{
	int remainder = a % b;
	printf("%d",remainder);
	
}

int main()
{
	remainder(-3,7);
}
 */
 
 /* void Sum(int a,int b)
 {
	 int sum = a + b;
	 printf("%d",sum);
	 
 } */
 //program will not run successfully because entered number by user should get stored in proper location,which is an address of a.
 /* int main()
 {
	 int x,y;
	 printf("please enter two numbers\n");
	 printf("number1 \n");
	 scanf("%d",x);
	 
	 printf("number2 \n");
	 scanf("%d",y);
	 Sum(x,y);
 } */
 
 
 //using &a and &b to store user inputs.
 
  /* void Sum(int a,int b)
 {
	 int sum = a + b;
	 printf("%d",sum);
	 
 } */
 /* int main()
 {
	 int x,y;
	 printf("please enter two numbers\n");
	 printf("number1 \n");
	 scanf("%d",&x);
	 
	 printf("number2 \n");
	 scanf("%d",&y);
	 Sum(x,y);
 }  */
 
 //returning value from function.
 
 int ProductOfTwoNumbers (int a,int b)//ProductOfNumbers function will return integer.
 {
	 return  (a * b);//returning product of parameters a and b.
 }
 
 int main ()
 {
	 int x,y;
	 printf("please enter two numbers\n");
	 printf("number1 \n");
	 scanf("%d",&x);
	 
	 printf("number2 \n");
	 scanf("%d",&y);
	 
	 int product ;//variable to store function value.
	 product = ProductOfTwoNumbers (x,y);
	 
	 printf("Product = %d\n",product);//print variable value which is actually storing value of function with paramenters.
	 printf("Product = %d\n",ProductOfTwoNumbers (x,y));//both statements will give same result.
	 printf("Product = %d\n",product + 5);
	 printf("Product = %d\n",ProductOfTwoNumbers (x,y) + 5);
	 
 }
 
 
 