/*************************************************************************
	> File Name: shell.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月31日 星期四 16时25分42秒
 ************************************************************************/

#include<stdio.h>

void shellSort(int *, int);

int main()
{
	int a[100], n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	shellSort(a, n);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

void shellSort(int *a, int n)
{
	int gap, i, j, temp;
	for (gap = n/2; gap > 0; gap /= 2)
	{
		for (i = gap; i < n; i++)
		{
			for (j = i-gap; j >= 0 && a[j] > a[j+gap]; j -= gap)
			{
				temp = a[j];
				a[j] = a[j+gap];
				a[j+gap] = temp;
			}
		}
	}
}
