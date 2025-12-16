#include<stdio.h>
int binary(void *vp, int size)
{
	int i;
    for(i = size - 1; i >= 0; i--)
    {
        unsigned char mask = 0x80;     
        while(mask)
        {
            if( *((char *)vp + i) & mask )
                printf("1");
            else
                printf("0");

            mask >>= 1;  
        }

        printf(" ");    
    }

    printf("\n");
    return 0;
}
int main()
{
	unsigned int reg =5;
	int value;
	printf("Left shift by 2:\n");
	printf("Binary of 5:");
	binary(&reg, sizeof(reg));
	value=reg<<2;
	printf("value in hex:%X\n",value);
	printf("\n");
	
	printf("Right shift by 1:\n");
	reg=5;
	printf("Binary of 5:");
	binary(&reg, sizeof(reg));
	value=0;
	value=reg>>1;
	printf("value in hex:%X\n",value);
	
}
