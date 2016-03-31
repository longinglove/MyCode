/*************************************************************************
	> File Name: escape.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月31日 星期四 15时54分39秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void escape(char *, char *);

int main()
{
	char a[100], b[100];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	fgets(a, 100, stdin);
	escape(b, a);
	printf("%s\n", b);
	return 0;
}

void escape(char *s, char *t)
{
	int lengths, lengtht, index_t = 0, index_s = 0;
	lengtht = strlen(t);
	while (index_t < lengtht)
	{
		if (t[index_t] == '\n')
		{
			s[index_s++] = '\\';
			s[index_s++] = 'n';
			index_t++;
		}
		else if (t[index_t] == '\t')
		{
			s[index_s++] = '\\';
			s[index_s++] = 't';
			index_t++;
		}
		else
			s[index_s++] = t[index_t++];
	}
}
