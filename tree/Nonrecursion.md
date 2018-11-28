---
Description: This file is about tree of nonrecursion.
---
>二叉树遍历算法的改进（非递归方式实现以及线索二叉树）
# 1.二叉树深度优先遍历算法的非递归实现
## 1>先序遍历非递归算法
>关键点：用栈来存储所到的结点，右孩子先入栈，左孩子后入栈。
```c
void preorderNonrecursion(BTNode *bt)
{
	if(bt!=NULL)
	{
		BTNode *Stack[maxSize];
		int top=-1;
		BTNode *p;
		Stack[++top]=bt;
		while(top!=-1)
		{
			p=Stack[top--];
			Vist(p);
			if(p->rchild!=NULL)
				Stack[++top]=p->rchild;
			if(p->lchild!=NULL)
				Stack[++top]=p->lchild
		}
	}
}
```
## 2>中序遍历非递归算法
>关键点： 若栈顶结点左孩子存在，则左孩子入栈，若栈顶结点左孩子不存在，则出栈并输出栈顶结点，然后检查其右孩子是否存在，若存在，则右孩子入栈。
```c
void inordernonrecursion(BTNode *bt)
{
	if(bt!=ULL)
	{
		BTNode *Stack[maxSize];
		int top=-1;
		BTNode *p;
		p=bt;
		while(top!=-1||p!=NULL)
		{
			while(p!=NULL)
			{
				Stack[++top]=p;
				p=p->lchild;
			}
			if(top!=-1)
			{
				p=Stack[top--];
				visit(p);
				p=p->rchild;
			}
		}
	}
}
```
## 3>后序遍历非递归算法
>关键点：由于“逆后序”和是先序遍历过程中对左右子树遍历顺序交换得到的结果，故讲先序算法的左右入栈顺序改变 并将所得序列进行一次倒序就能得到后序序列
```c
void postorderNOnrecursion(BTNode *bt)
{
	if(bt!=NULL)
	{
		BTNode *Stack1[maxSize];int top1=-1;
		BTNode *Stack2[maxSize];int top2=-1;
		BTNode *p=NULL;
		Stack1[++top1]=bt;
		while(top1!=NULL)
		{
			p=Stack1[top1--];
			Stack2[++top2]=p;
			if(p->lchild!=NULL) Stack1[++top1]=p->lchild;
			if(p->rchild!=NULL) Stack2[++top1]=p->lchild;
		}
		while(top2!=NULL)
		{
			p=Stack[top2--];
			visit(p);
		}
	}
}
```
# 2.线索二叉树
## 1>中序线索二叉树
### 1)线索二叉树的构造
```c
typedef struct TBTNode
{
	char data;
	int ltag,rtag;
	struct TBTNode *lchild;
	struct TBTNode *rchild;
}
```
>1.中序线索二叉树线索过程
```c
void InThread(TBTNode *p,TBTNode *&pre)
{
	if(p!=NULL)
	{
		InThread(p->lchild,pre)
		if(p->lchild==NULL)
		{
			p->lchild=pre;
			p->ltag=1;
		}
		if(pre!=NULL&&pre->lchild==NULL)
		{
			pre->rchild=p;
			pre->rtag=1;
		}
		pre=p;		//此三句可简写为：InThread(p->rchild,pre);pre=p;
		p=p->rchild;	//
		InThread(p,pre);//
	}
}
```
>2.中序线索二叉树主程序
```c
void createInThread(TBTNode *root)
{
	TBTNode *pre=NULL;
	if(root!=NULL)
	{
		InThread(root,pre);
		pre->rchild=NULL;
		pre->rtag=1;
	}
}
```
### 2)遍历终须线索二叉树
>搜索第一个访问的结点信息
```c
TBTNode *First(TBTNode *p)
{
	while(p->ltag==0)
		p=p->lchild;
	return p;
}
```
>搜索后继算法
```c
TBTNode *Next(TBTNode *p)
{
	if(p->rtag==0)
		return First(p->rchild);
	else 
		return p->rchild;
}
```
>遍历主函数
```c
void Inorder(TBTNode *root)
{
	for(TBTNode *p=First(root);p~=NULL;p=Next(p))
		Visit(p)
}
```
## 2>前序线索二叉树
### 1)构造前序线索二叉树
```c
void preThread(TBTNode *p,TBTNode *&pre)
{
	if(p!=NULL)
	{
		if(p->lchild==NULL)
		{
			p->lchild=pre;
			p->ltag=1;
		}
		if(pre!=NULL&&pre->rchild==NULL)
		{
			pre->rchild=p;
			pre->rtag=1;
		}
		pre=p;
		if(p->ltag==0)	preThread(p->lchild,pre);
		if(p->rtag==0)	preThread(p->rchild,pre);
	}
}
```
### 2)遍历前序线索二叉树
```c
void preorde(TBTNode *root)
{
	if(root!=NULL)
	{
		TBTNode *p=root;
		while(p!=NULL)
		{
			while(p->ltag==0)
			{
				visit(p);
				p=p->lchild;
			}
			visit(p);
			p=p->rchild;
		}
	}
}
```
## 3>后序线索二叉树
### 后序线索二叉树的构造
```c
void postThread(TBTNode *p,TBTNode *&pre)
{
	if(p!=NULL)
	{
		postThread(p->lchild,pre);
		postThread(p->rchild,pre);
		if(p->lchild==NULL)
		{
			pre=p->lchild;
			p->ltag=1;
		}
		if(pre!=NULL&&p->rchild==NULL)
		{
			pre->rchild=p;
			pre-rtag=1;
		}
		pre=p;
	}
}
```
