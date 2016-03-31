/*************************************************************************
	> File Name: gcd.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月31日 星期四 09时07分16秒
 ************************************************************************/

#include<stdio.h>

int gcd(int, int);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a, b));
	return 0;
}

int gcd(int a, int b)
{
	return (b == 0)?a:(gcd(b, a%b));
}
