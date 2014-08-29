#if you want to delcare function,there are two chioces for you.the first one is new function ar first ,and the second one i dont know



#include <stdio.h>

int sum(int n,int m)
{
	int S=n+m;
	return S;
}

main()
{
	int A,B,S;
	printf("please enter a number A:");
	scanf("%d",&A);
	printf("please enter a number B:");
	scanf("%d",&B);

	S = sum(A,B);
	printf("%d\n",S);

}
