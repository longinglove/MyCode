/*************************************************************************
	> File Name: lcs.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月28日 星期一 22时26分04秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char a[10] = "cnblogs";
char b[10] = "belong";
int matrix[10][10];

void LCS(char *a, char *b)
{
	int i, j;
	for (i = 1; i <= strlen(a); i++)
	{
		for (j = 1; j <= strlen(b); j++)
		{
			if (a[i-1] == b[j-1])
				matrix[i][j] = matrix[i-1][j-1]+1;
			else
			{
				if (matrix[i-1][j] >= matrix[i][j-1])
					matrix[i][j] = matrix[i-1][j];
				else
					matrix[i][j] = matrix[i][j-1];
			}
		}
	}
}

int main()
{
	LCS(a, b);
	printf("%d\n", matrix[strlen(a)][strlen(b)]);
	return 0;
}
