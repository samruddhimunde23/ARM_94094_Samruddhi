#include<stdio.h>
#define BV(n)(1<<(n))
int main()
{
		unsigned int reg =0x08;
		if(reg & BV(3))
		{
		printf("Bit 3 is SET");
	}
	else
	{
	printf("Bit 3 is NOT SET");
}
		

}
