#include<stdio.h>
int main()
{
	int n,b,count;
	printf("Enter 1st number:");
	scanf("%d",&n);
	printf("Enter 2nd number:");
   	scanf("%d",&b);
   	while(n>0)
   	{
   		count+=(n&1);
   		n>>1;
	}
	printf("total no of 1's:",count);
	return 0;
}
