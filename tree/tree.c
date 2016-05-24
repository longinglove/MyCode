/*************************************************************************
	> File Name: tree.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年04月12日 星期二 09时47分48秒
 ************************************************************************/

#include"tree.c"
#include<stdio.h>

SearchTree MakeEmpty(SearchTree T)
{
	if (T != NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}
	return NULL;
}

Position Find(ElementType X, SearchTree T)
{
	if (T == NULL)
		return NULL;
	else if (X < T->Element)
		return Find(X, T->Left);
	else if (X > T->Element)
		return Find(X, T->Right);
	else
		return T;
}

Position FindMin(SearchTree T)
{
	if (T == NULL)
		return NULL;
	else if (T->Left == NULL)
		return T;
	else
		return FindMin(T->Left);
}

Position FindMax(SearchTree T)
{
	if (T == NULL)
		return NULL;
	else if (T->Right == NULL)
		return T;
	else
		return FindMax(T->Right);
}

SearchTree Insert(ElementType X, SearchTree T)
{
	if (T == NULL)
	{
		T = malloc(sizeof(struct TreeNode));
		if (T == NULL)
			ERROR("malloc");
		T->Element = X;
		T->Right = T->Left = NULL;
	}
	else if (X < T->Element)
		T->Left = Insert(X, T->Left);
	else if (X > T->Element)
		T->Right = Insert(X, T->Right);
	return T;
}

SearchTree Delete(ElementType X, SearchTree T)
{
	Position temp;
	if (T == NULL)
		ERROR("empty tree");
	else if (X < T->Element)
		T->Left = Delete(X, T->Left);
	else if (X > T->Element)
		T->Right = Delete(X, T->Right);
	else if (T->Right && T->Left)
	{
		temp = FindMin(T->Right);
		T->Element = temp->Element;
		T->Right = Delete(T->Element, T->Right);
	}
	else
	{
		temp = T;
		if (T->Left == NULL)
			T = T->Right;
		else if (T->Right == NULL)
			T= T->Left;
		free(temp);
	}
}

ElementType Retrieve(Position P)
{
	return p->Element;
}
