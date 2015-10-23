/*************************************************************************
	> File Name: order_byte.c
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Mon 14 Sep 2015 10:02:45 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define uint unsigned int
typedef union {
        uint num32;
	struct union_s{
		uint a:4;
		uint b:4;
		uint c:4;
		uint d:4;
		uint e:16;
	}s_num;
	struct union_s1{
		
		uint bit0:1;
		uint bit1:1;
		uint bit2:1;
		uint bit3:1;
	/*	char half;*/
		uint bit4:1;
		uint bit5:1;
		uint bit6:1;
		uint bit7:1;
	}b_num;

}TYPE_DEF;
void print_pv(TYPE_DEF tmp);
int  isLitteOrder()
{
	union tmp_u{
		char flag;
		uint test_order;
	}tmp;
	tmp.test_order = 1;
	return  (tmp.flag == 1)? 1:0;
}
int main(int argc,char **argv)
{
	TYPE_DEF tmp;
	if(argc < 2)
	{
		printf("Error Para!\n");
		exit(0);
	}
	tmp.num32 = strtol(argv[1],NULL,0);
	if(tmp.num32 > 0xffffffff)
	{
		printf("Data is too big!(0--0xffffffff)\n");
		exit(0);
	}
	printf("\n0x%x\n",tmp.num32);
	if(isLitteOrder())
		printf("Litte Order:\n\tlow\t->\t->\tHigh\n");
	else
		printf("Big Order:\n\thigh\t->\t->\tlow\n");
	printf("%d--->%d\n",sizeof(TYPE_DEF),sizeof(tmp));
	printf("\ta\tb\tc\td\n");
	printf("\t%x\t%x\t%x\t%x\n",tmp.s_num.a,tmp.s_num.b,tmp.s_num.c,tmp.s_num.d);
	printf("\n%x\n",tmp.s_num.e);

	print_pv(tmp);


	return 0;
}

void print_pv(TYPE_DEF tmp)
{
	printf("bit0-->%p-->%d\n",&tmp.b_num,tmp.b_num.bit0);
	printf("bit1-->%p-->%d\n",&tmp.b_num,tmp.b_num.bit1);
	printf("bit2-->%p-->%d\n",&tmp.b_num,tmp.b_num.bit2);
	printf("bit3-->%p-->%d\n",&tmp.b_num,tmp.b_num.bit3);
	printf("bit4-->%p-->%d\n",&tmp.b_num,tmp.b_num.bit4);
	printf("bit5-->%p-->%d\n",&tmp.b_num,tmp.b_num.bit5);
	printf("bit6-->%p-->%d\n",&tmp.b_num,tmp.b_num.bit6);
	printf("bit7-->%p-->%d\n",&tmp.b_num,tmp.b_num.bit7);
}





