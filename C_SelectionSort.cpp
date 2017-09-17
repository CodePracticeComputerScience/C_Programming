# include <stdio.h>
# include <stdlib.h>



void SelectionSort(int A[], int n)
{
int i, j, small, temp;
 for (i = 0; i < n-1; i++) //outer for loop
								
	{							
		small = i;
		for (j = i+1; j < n; j++)//inner for loop
		{
			if (A[j] < A[small])	//comparing elements
			small = j;
			
									//swapping of values			
			temp = A[small];
			A[small] = A[i];
			A[i] = temp;
		}
	}
}
int main()
{
	int A[] ={2,7,4,1,5,3};
	
	SelectionSort(A, 6);//calling function
	for(int k = 0;k < 6;k++)
	{
	printf("%d",A[k]);
	}
}