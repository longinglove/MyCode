/*************************************************************************
	> File Name: fib.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月28日 星期一 21时20分34秒
 ************************************************************************/

#include<stdio.h>

int fib(int n)
{
	return (2 > n)?n:fib(n-1)+fib(n-2);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}
