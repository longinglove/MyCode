/*************************************************************************
	> File Name: trim.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年05月24日 星期二 16时48分21秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int trim(char *);

int main(int argc, char *argv[])
{
	char a[20];
	scanf("%s", a);
	printf("%d\n", trim(a));
	return 0;
}

int trim(char *s)
{
	int i;
	for (i = strlen(s) - 1; i >= 0; i--)
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			break;
	s[i+1] = 0;
	return i; 
}
