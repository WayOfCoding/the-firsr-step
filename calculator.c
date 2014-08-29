#you can type some brief code in here.this file aim to create a calculator in C

#include <stdio.h>
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

int sum(int n,int m)
{
	int S=n+m;
	return S;
}
