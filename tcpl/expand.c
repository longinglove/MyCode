/*************************************************************************
	> File Name: expand.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年05月24日 星期二 11时40分27秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void expand(char *s1, char *s2);
void expand2(char *s1, char *s2);

int main(int argc, char *argv[])
{
	char input[20];
	char output[100];
	scanf("%s", input);
	expand(input, output);
	printf("%s\n", output);
	return 0;
}

void expand(char *s1, char *s2)
{
	int i, j = 0;
	char ch;
	for (i = 0; i < strlen(s1);)
	{
		ch = s1[i];
		if (s1[i+1] == '-' && s1[i+2] >= ch)
		{
			if (s1[i+1] == '-')
			{
				while (ch <= s1[i+2])
					s2[j++] = ch++;
			}
			i += 3;
		}
		else
		{
			s2[j++] = ch;
			i++;
		}

	}
	s2[j] = 0;
}

void expand2(char *s1, char *s2)
{
	char c;
	int i, j;
	i = j = 0;
	while ((c = s1[i++]) != 0)
	{
		if (s1[i] == '-' && s1[i+1] >= c)
		{
			i++;
			while (c < s1[i])
				s2[j++] = c++;
		}
		else
			s2[j++] = c;
	}
	s2[j] = 0;
}
