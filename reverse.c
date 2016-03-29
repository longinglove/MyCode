/*************************************************************************
	> File Name: reverse.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月28日 星期一 20时21分57秒
 ************************************************************************/

#include<stdio.h>

int A[10], temp;

void reverse(int *A, int lo, int hi)
{
	if (lo < hi)
	{
		temp = A[lo];
		A[lo] = A[hi];
		A[hi] = temp;
		reverse(A, lo+1, hi-1);
	}
	else if (lo == hi)
		return;
	else if (lo > hi)
		return;
}

int main()
{
	int i, lo, hi;
	for (i = 0; i < 10; i++)
		A[i] = i;
	lo = 0;
	hi = 9;
	reverse(A, lo, hi);
	for (i = 0; i < 10; i++)
		printf("%d\n", A[i]);
	return 0;
}

