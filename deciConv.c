/*************************************************************************
	> File Name: deciConv.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月30日 星期三 10时58分19秒
 ************************************************************************/

#include<stdio.h>

#define MAXN	1000

int stack[MAXN];

int main()
{
	int n, deci, top;
	top = 0;
	scanf("%d %d", &n, &deci);
	while (n)
	{
		stack[top++] = n%deci;
		n /= deci;
	}
	while (top)
		printf("%d", stack[--top]);
	printf("\n");
	return 0;
}
