/*************************************************************************
	> File Name: fib2.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月28日 星期一 21时41分31秒
 ************************************************************************/

#include<stdio.h>

int fib(n)
{
	int f = 0, g = 1;
	while (0 < n--)
	{
		g = f+g;
		f = g-f;
	}
	return g;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}

