# include <stdio.h>
# include <stdlib.h>
# include <string.h>  

/* int main()
{
	
char Array[6] = "Hello";//Hello has 5 characters and one null terminator so total 6 characters.
char Array1[4] ="Hel";
printf("%s\n",Array);
printf("%s\n",Array1);

} */

//string functions

int main()
{
	char string1[12] = "Hello World";
	char string2[6] = "World";
	char string3[15];
	
	strcpy(string2,string1);//'Hello World' will be copied into string2,even string2 array size is 6.because this function returns pointer to the resulting string.
	
	printf("%s\n",string2);
	
	strcat(string1,string2);
	
	printf("%s\n",string1);
	
	printf("%d\n",strlen(string1));
	
	printf("%d\n",strcmp(string1,string1));//same size that it will print 0.
	printf("%d\n",strcmp(string1,string2));//different size than it will print 1.
	printf("%d\n",strcmp(string1,string3));
}