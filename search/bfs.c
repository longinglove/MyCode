/*************************************************************************
	> File Name: bfs.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年09月06日 星期二 15时01分14秒
 ************************************************************************/

#include<stdio.h>

#define MAXN 50

struct node
{
	int x;
	int y;
	int step;
};

int main(int argc, char * argv[])
{
	int startx, starty, endx, endy, newx, newy, i, j, head, tail, n, m, flag = 0;
	int book[MAXN][MAXN] = {0}, a[MAXN][MAXN] = {0};
	int next[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	struct node que[MAXN*MAXN];
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	scanf("%d %d %d %d", &startx, &starty, &endx, &endy);

	head = 1;
	tail = 1;
	que[tail].x = startx;
	que[tail].y = starty;
	que[tail].step = 1;
	book[startx][starty] = 1;
	tail++;

	while (head < tail)
	{
		for (i = 0; i < 4; i++)
		{
			newx = que[head].x + next[i][0];
			newy = que[head].y + next[i][1];
			if (newx < 1 || newx > n || newy < 1 || newy > m)
				continue;
			if (book[newx][newy] == 0 && a[newx][newy] == 0)
			{
				book[newx][newy] = 1;
				que[tail].x = newx;
				que[tail].y = newy;
				que[tail].step = que[head].step + 1;
				tail++;
			}
			if (newx == endx && newy == endy)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
		head++;
	}
	printf("%d\n", que[tail-1].step);
	return 0;
}
