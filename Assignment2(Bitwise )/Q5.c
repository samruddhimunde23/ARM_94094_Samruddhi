#include<stdio.h>
#define BV(n)(1<<(n))

int main()
{
    unsigned int reg =0xAA;
	int value=0,value1=0;
	
    value=(reg>>2)& 0x07;
    
    printf("Read bits from 2 to 4:%X\n",value);
    reg=0xAA;
    //reg = reg & ~(BV(2) | BV(3) | BV(4) ); 
    //reg |= (value << 2);
    printf("Before writing bits over 2 to 4:%X\n",reg);
    reg = (reg & ~(0x07<<2))|(0x03<<2);
    printf("After writing bits over 2 to 4:%X\n",reg);
    return 0;
}
