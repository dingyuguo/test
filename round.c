/*************************************************************************
	> File Name: round.c
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Fri 09 Oct 2015 03:37:32 PM CST
 ************************************************************************/

#include<stdio.h>
#define ROUND_UP(x, align) (((int) (x) + (align - 1)) & ~(align - 1))
#define ROUND_DOWN(x, align) (((int) (x)) & ~(align - 1))
#define FLASH_BLOCK	0x20000
int main()
{
	int x = FLASH_BLOCK * 5+1;
	printf("round_up = %x\n",ROUND_UP(x,FLASH_BLOCK));
	printf("round_down = %x\n",ROUND_DOWN(x,FLASH_BLOCK));
	return 0;
}

