/*************************************************************************
	> File Name: 360.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月29日 星期二 20时29分28秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char a[300000];

void replace(int, char);
int handle(int);

int main()
{
	int length, replaceNum, pos;
	char c;
	memset(a, 0, sizeof(a));
	while (1)
	{
		scanf("%d %d", &length, &replaceNum);
		scanf("%s", a);
		while (replaceNum--)
		{
			scanf("%d %c", &pos, &c);
			replace(pos, c);
			printf("%d\n", handle(length));
		}
		memset(a, 0, sizeof(a));
	}
	return 0;
}

void replace(int pos, char c)
{
	a[pos-1] = c;
}

int handle(int length)
{
	int result = 0, temp, i, j, num;
	for (i = 0; i < length; i++)
	{
		if (a[i] == '.')
		{
			num = 0;
			for (j = i+1; j < length; j++)
			{
				if (a[j] == '.')
					num++;
				else
					break;
			}
			result += num;
			i = j;
		}
	}
	return result;
}
