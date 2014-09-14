#if you want to delcare function,there are two chioces for you.the first one is new function ar first 
#	,and the second one you need type head of new function at the front;



#include <stdio.h>
#include<conio.h>
int sum(int n, int m);
int difference(int n, int m);
int times(int n, int m);
int division(int n, int m);


main()
{
	int A, B, S, differ,time,divise,operate;
	printf("please enter a number A:");
	scanf("%d", &A);
	printf("please enter a number B:");
	scanf("%d", &B);
	printf("请选择要进行的操作：\n");
	printf("1.加法\n");
	printf("2.除法\n");
	printf("3.乘法\n");
	printf("4.减法\n");
	printf("0.退出\n");
	scanf("%d", &operate);

	switch (operate)
	{
	case 1:
		S = sum(A, B);
		printf("%d\n", S);
		break;
	case 2:
		differ = difference(A, B);
		printf("%d\n", differ);
		break;
	case 3:
		time = times(A, B);
		printf("%d\n", time);
		break;
	case 4:
		divise = division(A, B);
		printf("%d\n", divise);
		break;
	case 0:
		break;
	}	

}

int sum(int n, int m)
{
	int S = n + m;
	return S;
}

int difference(int n, int m)
{
	int differ = n - m;
	return differ;
}

int times(int n, int m)
{
	int times = n * m;
	return times;
}

int division(int n, int m)
{
	int divise = n / m;
	return divise;

}
/*TvT你写的这么好还要我何用*/
