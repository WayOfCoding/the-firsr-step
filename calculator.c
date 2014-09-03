#if you want to delcare function,there are two chioces for you.the first one is new function ar first 
#	,and the second one you need type head of new function at the front;



#include <stdio.h>
int sum(int n, int m);
int difference(int n, int m);
int times(int n, int m);
int division(int n, int m);


main()
{
	int A, B, S, differ,time,divise;
	printf("please enter a number A:");
	scanf("%d", &A);
	printf("please enter a number B:");
	scanf("%d", &B);

	S = sum(A, B);
	differ = difference(A, B);
	time = times(A, B);
	divise = division(A, B);

	printf("%d,%d,%d,%d\n", S, differ, divise, time);

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
