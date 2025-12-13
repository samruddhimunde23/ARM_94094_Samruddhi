#include<stdio.h>
int count(unsigned int n)
{
	int count =0;
	while(n>0)
   	{
   		count+=(n&1);
   		n>>=1;
	}
	return count;
}

int main()
{
	int n;
	printf("Enter 1st number:");
	scanf("%d",&n);
    printf("total no of 1's:%d",count(n));
	return 0;
}
