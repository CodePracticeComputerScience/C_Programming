#include <stdio.h>
#include <stdlib.h>

int ArraySum (int Myarray[],int size)
{
	int sum;
		sum = 0;
	for (int i = 0; i < size ; i++)
	{
		sum = sum + Myarray[i];
	}
	return sum;
}

int main()
{
	int Myarrayvalues[6] = {20,30,40,50,60,70};
	int final = ArraySum (Myarrayvalues,4);
	printf("%d",final);
	
}