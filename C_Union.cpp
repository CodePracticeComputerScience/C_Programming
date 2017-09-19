# include <stdio.h>
# include <stdlib.h>
# include <string.h>

union student 
{
	int id;
	char name[20];//memory size will be allocated as 20 ,maximum size of variable defined.
	float percentage;
} union1;//semicolon is required 

int main()
{
	
	//union1.id = 1;
	strcpy(union1.name,"kp");
	//union1.percentage = 56.98;
	
	//printf("id = %d    Name = %s     Percent = %f \n",union1.id,union1.name,union1.percentage);
	//printf("percentage = %f\n",union1.percentage);
	printf("%s",union1.name);
	
	printf("the size of union %d \n",sizeof(union1));

	
	return 0;
	
}
//if you initilize other 2 variables id and percentage than output will be unpredictable.union can store variable value of maximum sized variable from all.