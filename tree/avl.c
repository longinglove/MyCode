/*************************************************************************
	> File Name: avl.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年04月07日 星期四 11时41分44秒
 ************************************************************************/

#include"avl.h"

AvlTree MakeEmpty(AvlTree T)
{
	if (T != NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}
	return NULL;
}

Position Find(ElementType X, AvlTree T)
{
	if (T == NULL)
		return NULL;
	if (X < T->Element)
		return Find(X, T->Left);
	else if (X > T->Element)
		return Find(X, T->Right);
	else
		return T;
}

Position FindMin(AvlTree T)
{
	if (T == NULL)
		return NULL;
	if (T->Left == NULL)
		return T;
	else
		return FindMin(T->Left);
}

Position FindMax(AvlTree T)
{
	if (T == NULL)
		return NULL;
	if (T->Right == NULL)
		return T;
	else
		return FindMax(T->Right);
}

AvlTree Insert(ElementType X, AvlTree T)
{
	if (T == NULL)
	{
		T = malloc(sizeof(struct TreeNode));
		T->Element = X;
		T->Left = T->Right = NULL;
	}
	else if (X < T->Element)
		T->Left = Insert(X, T->Left);
	else if (X > T->Element)
		T->Right = Insert(X, T->Right);
	return T;
}

AvlTree Delete(ElementType X, AvlTree T)
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
			T = T->Left;
		free(temp);
	}
}

ElementType Retrieve(Position P)
{
	return P->Element;
}

int Height(Position P)
{
	if (P == NULL)
		return -1;
	else
		return P->Height;
}
