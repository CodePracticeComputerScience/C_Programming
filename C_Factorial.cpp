
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
int n;
printf("enter your number:\n");
scanf("%d", &n);
int i = 2;
double fact = 1;
while (i <= n) {
 fact = fact*i;
 i++;
}
printf("%f\n", fact);
}