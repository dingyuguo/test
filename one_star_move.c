/*************************************************************************
	> File Name: run.c
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Sat 26 Sep 2015 06:07:07 PM CST
 ************************************************************************/

#include<stdio.h>
#define N 10
int arr[N][N];
void gotoxy(int x,int y)
{
	printf("%c[%d;%df",0x1b,y,x);
}
void display(int len,int width)
{
	printf("*");
	fflush(stdout);
}
void display_map()
{
	int i = 0;
	int j = 0;
	system("clear");
	gotoxy(10,10);
	for(i = 0;i < N; i++)
	{
		for(j = 0; j < N;j++)
		{
			if(arr[i][j] == 1)
				printf("*");
			else
				printf(" ");
			
		}
		printf("\n         ");
	}
}
void init_map()
{
	int i = 0;
	int j = 0 ;
	for(i = 0;i < N;i++)
		for(j = 0;j < N;j++)
			arr[i][j] = 0;

}
void  move(int row,int line)
{
	init_map();
	arr[row][line] = 1;


}
void begin()
{
	int row = 0;
	int line = 0;
	init_map();
	while(1)
	{
	
		move(row,line++);
		if(N == row)
			row = 0;
		if(N == line)
			line  = 0;
		display_map();
		fflush(stdout);
		sleep(1);
	}

}

int main()
{
	begin();

#if 0
	int a = 0;
	int b = 0;
	while(1)
	{
		gotoxy(a++,b);
		display(a,b);
		usleep(50000);
		system("clear");
		usleep(50000);
		if (70 == a)
			a = 0;

	}
#endif
	return 0;
}

