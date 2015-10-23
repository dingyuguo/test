/*************************************************************************
	> File Name: mw_to_db.c
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Fri 16 Oct 2015 01:36:58 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc,char **argv)
{
	double db;
	int mw = 0;
	if(argc != 2)
	{
		printf("mw_to_db  xx\n");
		return 0;
	}
	mw = strtoul(argv[1],NULL,0);
	printf("mw = %d\n",mw);
	db =mw * 1.0 / 10 /1000 ;
	printf(" %ddb\n",db);
		return 0;

}
