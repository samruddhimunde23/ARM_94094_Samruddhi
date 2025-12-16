#include<stdio.h>
int main()
{
	unsigned int reg =0xABCD;
	int value=0,value1=0;
	value = (reg >> 0) & 0x0F; 
	printf("Lower 4 bits:%X\n",value);
	reg=0xABCD;
	//value1=0;
	value1 = (reg >> 12) & 0x0F; 
	printf("Upper 4 bits:%X\n",value1);


	
}
