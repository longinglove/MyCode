/*************************************************************************
	> File Name: main.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年04月06日 星期三 10时39分19秒
 ************************************************************************/

#include"tree.h"
#include<stdio.h>
#include<stdlib.h>

void PrintTree(SearchTree T);

int main()
{
	int i;
	Position P, M;
	SearchTree T;
	T = malloc(sizeof(struct TreeNode));
	T->Element = 6;
	T->Right = NULL;
	T->Left = NULL;
	Insert(8, T);
	Insert(2, T);
	Insert(1, T);
	Insert(4, T);
	Insert(3, T);
	Insert(5, T);
	P = FindMin(T);
	M = FindMax(T);
	printf("%d\n", T->Element);
	Delete(6, T);
	P = FindMin(T);
	M = FindMax(T);
	printf("%d\n", T->Element);
	MakeEmpty(T);
	return 0;
}

void PrintTree(SearchTree T)
{
	if (T != NULL)
	{
		PrintTree(T->Left);
		printf("%d\n", T->Element);
		PrintTree(T->Right);
	}
}
