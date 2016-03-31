/*************************************************************************
	> File Name: atoi.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月31日 星期四 16时14分32秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int atoi(char *);

int main()
{
	char a[100];
	memset(a, 0, sizeof(a));
	fgets(a, 100, stdin);
	a[strlen(a)-1] = 0;
	printf("%d\n", atoi(a));
	return 0;
}

int atoi(char *s)
{
	int i, n, sign;
	for (i = 0; isspace(s[i]); i++);
	sign = (s[i] == '-')?-1:1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10*n + (s[i] - '0');
	return sign*n;
}
