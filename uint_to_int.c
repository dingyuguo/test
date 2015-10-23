/*************************************************************************
	> File Name: uint_to_int.c
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Tue 20 Oct 2015 03:04:08 PM CST
 ************************************************************************/

#include<stdio.h>
typedef unsigned short  uint16_t;
int main()
{
	uint16_t a16 = 0x2005;
	int a32 = a16;
	double db64 = 0.0;
	printf("a32 = %x,(int)a16 = %x\n",a32,(int)a16);
	db64 = -2.519;
	printf("db = %.3f-->(int-f)db = %.3f,(-d)db = %d\n",db64,(int)db64,db64);
	
	return 0;
}
