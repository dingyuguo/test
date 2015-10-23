/*************************************************************************
	> File Name: fun_p.c
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Tue 15 Sep 2015 02:34:36 PM CST
 ************************************************************************/

#include<stdio.h>
void  main()
{
	/*什么都没测出来，哈哈哈！看来得学习编译原理和汇编还有gdb的调试技术还有操作系统了！加油把！*/
	printf("main---%p---%x\n",&main,main);
	printf("%p---%x\n",&main+2,main+2);
	printf("%d--%x---%s\n",*main,*main,*main);
}
