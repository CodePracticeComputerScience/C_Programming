# include <stdio.h>
# include <stdlib.h>

//simple declaration of array
/* int main()
{
int ArrayExample[6] = {1,2,3,4,5,6};
printf("%d",ArrayExample[4]);
}
 */
 
 /* int main()
{
int ArrayExample[6] = {1,2,3,4,5,6};

int VariableArray = ArrayExample[4];//declaring variable and storing value of array in it.

printf("%d",VariableArray);
} 
 */

 //to print all elements of array
 
 /* int main()
{
int ArrayExample[6] = {1,2,3,4,5,6};


for(int i;i < 6;i++)
{
printf("%d\n",ArrayExample[i]);
}
} */

//not good practice 

/* int main()
{
int ArrayExample[6] = {1,2,3,4,5,6};


for(int i;i < 12;i++)//this will print garbage elements also.
{
printf("%d\n",ArrayExample[i]);
}
} */

//changing value of element from an array.

int main()
{
int ArrayExample[6] = {1,2,3,4,5,6};

ArrayExample[3] = 8;//changed value from 4 to 8.

for(int i;i < 6;i++)
	
printf("%d\n",ArrayExample[i]);
}