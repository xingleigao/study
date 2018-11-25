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
>>先序遍历的操作过程：
>>二叉树为空树，则什么都不做，否则：
>>>1、访问根结点；
>>>2、先序遍历左子树；
>>>3、先序遍历右子树。
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
2.中序遍历
中序遍历的操作过程：
		二叉树为空树，则什么都不做。否则：
			1.
