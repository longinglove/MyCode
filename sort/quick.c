/*************************************************************************
	> File Name: quick.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月29日 星期二 17时30分52秒
 ************************************************************************/

#include<stdio.h>

int A[100] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};

void quickSort(int, int);

int main()
{
	int i;
	quickSort(0, 9);
	for (i = 0; i < 10; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}

void quickSort(int start, int end)
{
	int i, j, temp, flag;
	flag = A[start];
	i = start;
	j = end;
	if (start > end)
		return;
	while (i != j)
	{
		while (A[j] >= flag && i < j) 
			j--;
		while (A[i] <= flag && i < j) 
			i++;
		if (i < j)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	A[start] = A[j];
	A[j] = flag;
	quickSort(start, j-1);
	quickSort(j+1, end);
	return;
}
