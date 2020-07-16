---
Description: the file is about the search of BTnode.
---
# 二叉排序树与平衡二叉树
## 1.二叉排序树
### 1.二叉排序树（BST）的定义与存储结构
1. 二叉排序树的定义<br>
	二叉排序树或者是空树，或者是满足以下性质的二叉树<br>
	1.若它的左子树不空，则左子树上所有的关键字的值均小于根关键字的值。<br>
	2.若它的右子树不空，则右子树上所有的关键字的值均大于根关键字的值。<br>
	3.左右子树又各自是一颗排序二叉树。
2. 二叉排序树的存储结构
	二叉排序树通常采用二茬链表进行存储，其结点类型与一般的二叉树类似。
```c
typedef struct BTNode
{
	int key;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;
```
### 2.二叉排序树的基本算法
1. 查找关键字的算法<br>
1.递归算法如下：
```c
BTNode *BSTSearch(BTNode* bt,int key)
{
	if(p==NULL)
		return NULL;
	else
	{
		if(p->key==key)	return p;
		else if(p->key>key)	return BSTSearch(p->lchild,key);
		else return BSTSearch(p->rchild,key);
	}
}
```
2.直接查找代码如下：
```c
BTNode *BSTSearch(BTNode* p,int key)
{
	while(p!=NULL)
	{
		if(key==p->key)
			return p;
		else if(key<p->key)
			p=p->lchild;
		else p=p->rchild;
	}
	
}
```
2. 插入关键字的算法<br>
先进行查找，若待插入关键字已经存在，则插入不成功；否则，插入成功；
```c
int BSTInsert(BTNode *&p,int key)
{
	if(p==NULL)
	{
		p=(BTNode*)malloc(sizeof(BTNode));
		p->lchild=p->rchild=NULL;
		p->key=key;
		return 1;
	}
	else
	{
		if(key==p->key)
			return 0;
		else if(key<p->key)	return BSTInsert(p->lchild,key);
		else	return BSTInsert(p->rchild,key);
	}
}
```
3. 构造算法
```c
void CreatBST(BTNode *&bt,int key[],int n)
{
	int i;
	bt=NULL;
	for(i=0;i<n;++i)
		BSTInsert(bt,key[i]);
}
```
4. 删除关键字的算法
P282 手工实现过程
## 2.平衡二叉树
### 1.平衡二叉树的概念
平衡二叉树中各个结点的平衡因子绝对值不大于1.
### 2.平衡调整
1. LL调整：右单旋转调整
2. RR调整：左但旋转调整
3. LR调整：先左后右双旋转调整
4. RL调整：先右后左双旋转调整
