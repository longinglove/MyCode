/*************************************************************************
	> File Name: merge.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月29日 星期二 17时16分55秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int a[10] = {97, 53, 59, 26, 41, 58, 31, 1, 9, 10};
void mergeSort(int, int, int *, int *);
void merge(int, int, int, int *, int *);

int main()
{
	int *temp, i;
	temp = (int *)malloc(10*sizeof(int));
	mergeSort(0, 9, a, temp);
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

void mergeSort(int low, int high, int *a, int *temp)
{
	int middle;
	if (low < high)
	{
		middle = (low + high)/2;
		mergeSort(low, middle, a, temp);
		mergeSort(middle+1, high, a, temp);
		merge(low, middle+1, high, a, temp);
	}
}

void merge(int low, int middle, int high, int *a, int *temp)
{
	int i, LeftEnd, NumElements, TmpPos;

	LeftEnd = middle - 1;
	TmpPos = low;
	NumElements = high - low + 1;

	while (low <= LeftEnd && middle <= high)
		if (a[low] <= a[middle])
			temp[TmpPos++] = a[low++];
		else
			temp[TmpPos++] = a[middle++];

	while (low <= LeftEnd)
		temp[TmpPos++] = a[low++];
	while (middle <= high)
		temp[TmpPos++] = a[middle++];

	for (i = 0; i < NumElements; i++, high--)
		a[high] = temp[high];
}
