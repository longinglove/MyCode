/*************************************************************************
	> File Name: avl.h
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年04月07日 星期四 11时36分06秒
 ************************************************************************/

#ifndef _AVL_H_
#define _AVL_H_

#include<stdlib.h>
#include<stdio.h>

typedef int	Elment;
typedef struct AvlNode *Position;
typedef struct AvlNode *AvlTree;

struct AvlNode
{
	ElementType Element;
	AvlTree Left;
	AvlTree Right;
	int	Height;
};

AvlTree MakeEmpty(AvlTree T);
Position Find(ElementType X, AvlTree T);
Position FindMin(AvlTree T);
Position FindMax(AvlTree T);
AvlTree Insert(ElementType X, AvlTree T);
AvlTree Delete(ElementType X, AvlTree T);
ElementType Retrieve(Position P);
int Height(Position P);

#endif
