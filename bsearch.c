/*************************************************************************
	> File Name: bsearch.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月31日 星期四 15时44分15秒
 ************************************************************************/

#include<stdio.h>

int a[100];
int bsearch(int, int *, int);

int main()
{
	int i, x;
	for (i = 0; i < 100; i++)
		a[i] = 2*i;
	scanf("%d", &x);
	printf("%d\n", bsearch(x, a, 100));
	return 0;
}

int bsearch(int x, int *a, int n)
{
	int middle, low, high;
	low = 0;
	high = n-1;
	while (low <= high)
	{
		middle = (low + high)/2;
		if (a[middle] < x)
			low = middle+1;
		else if (x < a[middle])
			high = middle-1;
		else
			return middle;
	}
	return -1;
}
