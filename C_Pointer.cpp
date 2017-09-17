# include <stdio.h>
# include <stdlib.h>

//pointer is a variable whose value is the address of another variable.

/* int main()
{
	
int a  = 30;
int *p;//declare pointer with *.
p = &a;

printf("%d\n",p);
printf("%d\n",*p);//dereferencing
printf("%d\n",a);
printf("%d\n",&a);

} */

//Array of pointers
//error
 /* int main()
{
	int ArrayExample[3] = {30,40,50};
	int *ArrayPointer[3] = &ArrayExample[3];//this has to be inside for loop.poinert array initilization has to be inside braces.
	
	for(int i = 0; i < 3; i++)
	{
	printf("%d\n",*ArrayPointer[i]);
	}
	
} */

//no error


/* int main()
{
	int ArrayExample[3] = {30,40,50};
	int *ArrayPointer[3];//declare array pointer.
	
	for(int i = 0; i < 3; i++)
	{
	ArrayPointer[i] = &ArrayExample[i];	//array pointer initilization.
	printf("%d\n",*ArrayPointer[i]);
	}
	
} */

//passing pointer  as a function parameter.

/* void getvalue(int *pointer)
{
	*pointer = 10000;
	return;
}

int main()
{
 int get_value;
 
 getvalue(&get_value);

 printf("%d\n", get_value);
} */



