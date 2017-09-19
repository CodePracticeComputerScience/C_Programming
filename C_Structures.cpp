# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/* struct student 
{
	int id;
	char name[20];
	float percentage;
};//semicolon is required 

int main()
{
	struct student record1;
	
	record1.id = 1;
	strcpy(record1.name,"kp");
	record1.percentage = 56.98;
	
	printf("id = %d    Name = %s     Percent = %f \n",record1.id,record1.name,record1.percentage);
	
	return 0;
	
} */

//alternative way

struct student 
{
	int id;
	char name[20];
	float percentage;
} record1;//semicolon is required 

int main()
{
	
	record1.id = 1;
	strcpy(record1.name,"kp");
	record1.percentage = 56.98;
	
	printf("id = %d    Name = %s     Percent = %f \n",record1.id,record1.name,record1.percentage);
	
	return 0;
	
}