/*************************************************************************
	> File Name: pointer_addr.c
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Tue 15 Sep 2015 02:11:53 PM CST
 ************************************************************************/

#include<stdio.h>
int global;
int main()
{
	int main_first;
	int tmp;
	int num0 = 0;
	int num1 = 1;
	long p;
#if 0
	printf("%s---%p---%d\n","tmp",&tmp,tmp);
	printf("%s---%p---%d\n","num0",&num0,num0);
	printf("%s---%p---%d\n","num1",&num1,num1);
	p = (long)&num1;
	printf("%p---->%d\n",0x7ffc60d1c1d4,*((int *)p));
#endif
	printf("global---%p---%d\n",&global,global);
	printf("main()---%p----%x\n",&main,main);
	printf("main_first---%p---%d\n",&main_first,main_first);









	return 0;
}
