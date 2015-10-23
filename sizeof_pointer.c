/*************************************************************************
	> File Name: sizeof_pointer.c
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Mon 28 Sep 2015 10:06:02 AM CST
 ************************************************************************/

#include<stdio.h>
/*Notify: pointer data_type own 8bit in 64-bit system;
 *		own 4bit in 32-bit system;
 *		it is the same as "long".
 * */
int main()
{
	char * num;
	printf("sizeof(num) = %d\n",sizeof(num));
	printf("sizeof(* num) = %d\n",sizeof(* num));/*same as : char*/
	printf("sizeof(char *) = %d\n",sizeof(char *));
	printf("sizeof(int) = %d\n",sizeof(int));
	printf("sizeof(int *) = %d\n",sizeof(int *));


	return 0;
}
