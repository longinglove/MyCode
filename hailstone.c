/*************************************************************************
	> File Name: hailstone.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月26日 星期六 13时25分26秒
 ************************************************************************/

#include<stdio.h>

int hailstone(int);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", hailstone(n));
}

int hailstone(int n)
{
	int length = 1;
	while (1 < n)
	{
		if (n%2 == 0)
			n /= 2;
		else
			n = 3*n + 1;
		length++;
	}
	return length;
}
