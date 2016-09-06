/*************************************************************************
	> File Name: dfs.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年09月06日 星期二 11时19分57秒
 ************************************************************************/

#include<stdio.h>

#define MAXN 51

int min = 9999, endx, endy, n, m;
int a[MAXN][MAXN], book[MAXN][MAXN];

void dfs(int, int, int);

int main(int argc, char * argv[])
{
	int i, j, startx, starty;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	scanf("%d %d %d %d", &startx, &starty, &endx, &endy);
	dfs(startx, starty, 0);
	printf("%d\n", min);
	return 0;
}

void dfs(int x, int y, int step)
{
	int newx, newy, k;
	int next[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	if (x == endx && y == endy)
	{
		if (step < min)
			min = step;
		return;
	}
	for (k = 0; k < 4; k++)
	{
		newx = x + next[k][0];
		newy = y + next[k][1];
		if (newx < 1 || newx > n || newy < 1 || newy > m)
			continue;
		if (a[newx][newy] == 0 && book[newx][newy] == 0)
		{
			book[newx][newy] = 1;
			dfs(newx, newy, step+1);
			book[newx][newy] = 0;
		}
	}
	return;
}
