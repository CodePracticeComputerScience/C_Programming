# include <stdio.h>
# include <stdlib.h>


//while loop
/* int main()
{
int i = 0;
while (i < 10) 
	{
	 printf("%d\n",i);
	 i++;
	}
	
	return 0;
} */


//infinite loop
/* int main()
{
int i = 0;
while (i < 10);//infinite loop//you will never see the result of this program.just one semicolon after while make this change to previous program.
	{
	 printf("%d\n",i);
	 i++;
	}
	
	return 0;
}

 */
 
 //Do While loop
 /* int main()
{
int i = 0;
 do
	{
	 printf("%d\n",i);
	 i++;
	}while (i < 10);
	
	return 0;
} */

//Difference between Do While and While loop

/* int main()
{
int i = 0;
while (i > 10)
{
	printf("%d\n",i);
	i++;
}
printf("**************************\n");

do
{
	printf("%d\n",i);
	i++;
}while (i > 10);
} */
// Do While loop atleast printed initilize value of i.

//for loop

int main()
{

for(int i = 0; i < 10 ; i++)
{
	printf("%d\n",i);
}	
	
}