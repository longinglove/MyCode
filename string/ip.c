/*************************************************************************
	> File Name: ip.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年04月07日 星期四 08时55分21秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	int a, b, c, d, ip;
	scanf("%d.%d.%d.%d", &a, &b, &c, &d);
	ip =(a << 24) | (b << 16) | (c << 8) | d;
	printf("%d\n", ip);
	return 0;
}
