/*************************************************************************
	> File Name: tree.h
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年04月06日 星期三 10时35分59秒
 ************************************************************************/

#ifndef _TREE_H_
#define _TREE_H_

#define ERROR(m)	\
	do{perror(m); exit(EXIT_FAILURE);}while(0)

typedef int ElementType;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

struct TreeNode
{
	ElementType Element;
	SearchTree Left;
	SearchTree Right;
};


SearchTree MakeEmpty(SearchTree T);
Position Find(ElementType X, SearchTree T);
Position FindMin(SearchTree T);
Position FindMax(SearchTree T);
SearchTree Insert(ElementType X, SearchTree T);
SearchTree Delete(ElementType X, SearchTree T);
ElementType Retrieve(Position P);

#endif
