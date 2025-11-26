#include<stdio.h>
void main()
{
int n;
printf("up to How many values are required \n") ;
scanf("%d",&n);
for(int a=1;a<=n;a++) 
{
printf("2 * %d = %d\n",a,2*a);
}
}