/*************************************************************************
	> File Name: itoa.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年05月24日 星期二 16时29分43秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void itoa(int, char *);
void reverse(char *);
void itoa2(int, char *);

int main(int argc, char *argv[])
{
	int n;
	char a[20];
	scanf("%d", &n);
	itoa2(n, a);
	printf("%s\n", a);
	return 0;
}

void itoa(int n, char *s)
{
	int sig, temp, i = 0;
	if (n < 0)
	{
		sig = -1;
		n = -n;
	}
	if (n == 0)
		s[i++] = '0';
	while (n / 10 != 0 || n % 10 != 0)
	{
		temp = n % 10;
		s[i++] = temp + '0';
		n /= 10;
	}
	if (sig == -1)
		s[i++] = '-';
	s[i] = 0;
	reverse(s);
}

void reverse(char *s)
{
	int i, j;
	char c;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void itoa2(int n, char *s)
{
	int i = 0, sign;
	if ((sign = n) < 0)
		n = -n;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = 0;
	reverse(s);
}
