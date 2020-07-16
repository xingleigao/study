---
Description: This file is about tree.
---
# 树和二叉树
## 1.二叉树
### 1.二叉树的存储结构
链式存储结构
```c
typedef struct BTNode
{
char data;	//默认data域为char类型，如果需要修改类型 只需要修改此处
struct BTNode *lchild;
struct BTNode *rchild;
}BTNode;
```
### 2.二叉树的遍历算法（先序、中序、后序、层次遍历）
>1.先序遍历
>>先序遍历的操作过程：<br>
>>二叉树为空树，则什么都不做，否则：
>>>1)访问根结点；<br>
>>>2)先序遍历左子树；<br>
>>>3)先序遍历右子树。<br>
对应的算法描述如下：
```c
void preorder(BTNode *p)
{
	if(p!=NULL)
	{
		vist(p);		//vist(p)代表对相应结点的操作；
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
```
>2.中序遍历
>>中序遍历的操作过程：<br>
>>二叉树为空树，则什么都不做。否则：
>>>1)中序遍历左子树：<br>
>>>2)访问根结点；<br>
>>>3)中序遍历右子树。<br>
对应的算法描述如下:
```c
void inorder(BTNode *p)
{
	if(p!=NULL)
	{
		inorder(p->lchild);
		vist(p);
		inorder(p->rchild);
	}
}
```
>3.后序遍历
>>后序遍历的操作过程如下：<br>
>>如果二叉树为空树，则什么都不做；否则：
>>>1）后序遍历左子树；<br>
>>>2)后序遍历右子树；<br>
>>>3)访问根几点。<br>
对应的算法描述如下:
```c
void postorder(BTNode *p)
{
	if(p!=NULL)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		vist(p);
	}
}
```
# 例子
>p142假设二叉树采用二叉链表存储结构存储，编写一个程序，输出先序遍历序列中第k的值，假设k不大于总的节点数。
```c
int n=0;
void trave(BTNode *P,int k)
{
	if(p!+NULL)
		{
			++n;
			if(n==k)
			{
				cout<<p->data<<end1;
			}
			trave(p->lchild,k);
			trave(p->rchild,k);
		}
}
```
>4.层次遍历
>>按照每一层的顺序遍历，采用队列进行遍历：
```c
void level(BTNode *p)
{
	int front,rear;
	BTNode *que[maxSize];
	front=rear=0;
	BTNode *q;
	if(p!=NULL)
	{
		rear=(rear+1)%maxSize;
		que[rear]=p;
		while(front!=rear)
		{
			front=(front+1)%maxSize;
			q=que[front};
			visit(q);	//访问q
			if(q->lchild!=NULL)
			{
				rear=(rear+1)%maxSize;
				que[rear]=q->lchild;
			}
			if(q->rchild!=NULL)
			{
				rear=(rear+1)%maxSize;
				que[rear]=q->rchild;
			}
		}
	}
}
```
>>>p144 例题6-5 假设二叉树采用二叉链表存储结构存储，设计一个算法，求出该二叉树的宽度
>>>>对于非空树，树根所在的层为第一层，并且从层次遍历算法的程序中可以发现，有一个由当前结点找到其左右孩子的操作，因此，若我们知道当且结点的层数，就可以推得当且结点的层号。
```c
/*下面所定义的这个结构型为顺序肺循环队列的元素，可以存储结点指针以及结点所在的层号。×/
typedef struct
{
	BTNode *p;
	int lno;
}St;
int max Node(BTNode *b)
{
	St que[maxSize];
	int front,rear;
	int Lno,i,j,max;
	front=rear=0;
	BTNode *q;
	if(b!=NULL)
	{
		++rear;
		que[rear].p=b;
		que[rear].lno=1;
		while(front!=rear)
		{
			++front;
			q=que[front].p;
			Lno=que[front].lno;
			if(q->rchild!=NULL)
			{
				++rear;
				que[rear].p=q->rchild;
				que[rear].lno=Lno+1;
			}
			if(q->rchild!=NULL)
			{
				++rear;
				que[rear].p=q->rchild;
				que[rear].lno=Lno+1;
			}
		}
		max=0;
		for(i=1;i<=Lno;i++)
		{
			n=0;
			for(j=1;j<=rear;++j)
				if(que[j].lno==i)
					++n;
			if(max<n)
				max=n;
		}
		return max;
	}
	else return 0;
}
```

