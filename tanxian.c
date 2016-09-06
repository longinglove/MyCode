/*************************************************************************
	> File Name: tanxian.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年09月06日 星期二 12时14分09秒
 ************************************************************************/

#include<stdio.h>

struct node
{
	int x;
	int y;
};

int main(int argc, char *argv[])
{
	struct node que[2501];
	int head, tail;
	int a[51][51], book[51][51] = {0};
	int i, j, k, sum, startx, starty, newx, newy, n, m;
	int next[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	scanf("%d %d %d %d", &n, &m, &startx, &starty);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);

	head = 1;
	tail = 1;
	que[tail].x = startx;
	que[tail].y = starty;
	tail++;
	book[startx][starty] = 1;
	sum = 1;

	while (head < tail)
	{
		for (k = 0; k < 4; k++)
		{
			newx = next[k][0] + que[head].x;
			newy = next[k][1] + que[head].y;
			if (newx < 1 || newx > n || newy < 1 || newy > m)
				continue;
			if (a[newx][newy] > 0 && book[newx][newy] == 0)
			{
				book[newx][newy] = 1;
				sum++;
				que[tail].x = newx;
				que[tail].y = newy;
				tail++;
			}
		}
		head++;
	}
	printf("%d\n", sum);
	return 0;
}
