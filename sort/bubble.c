/*************************************************************************
	> File Name: bubble.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月29日 星期二 17时05分26秒
 ************************************************************************/

#include<stdio.h>

void bubble(int *, int);

int a[10] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};

int main()
{
	int i, n;
	n = 10;
	bubble(a, n);
	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	return 0;
}

void bubble(int *a, int n)
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (a[j+1] < a[j])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
