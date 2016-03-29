/*************************************************************************
	> File Name: insert.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月29日 星期二 22时34分15秒
 ************************************************************************/

#include<stdio.h>

void insertSort(int *, int);

int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)
		a[i] = 10-i;
	insertSort(a, 10);
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

void insertSort(int *a, int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		temp = a[i];
		for (j = i; j > 0 && a[j-1] > temp; j--)
			a[j] = a[j-1];
		a[j] = temp;
	}
}
