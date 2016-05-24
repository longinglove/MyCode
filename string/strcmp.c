/*************************************************************************
	> File Name: strcmp.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年04月06日 星期三 22时31分11秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char a[20] = "aaab";
	char b[20] = "bbAAA";
	char *temp, c;
	c = 'b';
	temp = &c;
	printf("compare: %d\n", strcmp(a, b));
	printf("strcat: %s\n", strcat(a, b));
	printf("strchr: %s\n", strchr(a, c));
	printf("strrchr: %s\n", strrchr(a, c));
	printf("strspn: %d\n", strspn(a, temp));
	printf("strcspn: %d\n", strcspn(a, temp));
	return 0;
}
