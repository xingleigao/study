---
Description: This file is about Creat tree.
---
# 由序列确定树
## 1.由前序和中序查找序列确定树
代码如下：
```c
BTNode *CreatBT(char pre[],char in[],int l1,int r1,int l2,int r2)
{
	if(l1>r1) return NULL;
	BTnode *s=(BTNode *)malloc(sizeof(BTNode));
	s->lchild=s->rchild=NULL;
	s->data=pre[l1];
	int i;
	for(i=l2;i<=r2;++i)
		if(in[i]==pre[l1])
			break;
	s->lchild=CreatBT(pre,in,l1+1,l1+i-l2,l2,i-1);
	s->rchild=CreatBT(pre,in,l1+i-l2+1,r1,i,r2);
	return s;
}
```
## 2.由后序和中序遍历序列确定树
代码如下：
```c
BTNode *CreatBT(char post[],char in[],int l1,int r1,int l2,r2)
{
	if(l1>r1) return NULL;
	BTNode *s=(BTNode *)malloc(sizeof(BTNode));
	s->lchild=s->rchilid=NULL:
	s->data=post[r1];
	for(i=l2;i<=r2;++i)
		if(in[i]==pre[r1])
			break;
	s->lchild=CreatBT(post,in,l1,l1+i-l2-1,l2,i-1);
	s->rchild=CreatBT(post,in,l1+i-l2,r1-1,i+1,r2);
}
```
## 3.由层次遍历序列以及中序遍历序列确定树
代码如下：
```c
int search(char arr[],char key,int l,int r)
{
	int idx;
	for(idx=l;idx<=r;++idx)
		if(arr[idx]==key)
			return idx;
	return -1;
}
void getSubLevel(char subLevel[],char level[],char in[],int n,int L,int R)
{
	int k=0;
	for(int i=0;i<n;++i)
		if(search(in,level[i],L,R)!=-1)
			subLevel[k++]=level[i];
}
BTNode *CreatBT(char level[],int in[],int n,int l,int r)
{
	if(l>r) return NULL;
	BTNode *s=(BTNode *)malloc(sizeof(BTNode));
	s->lchild=s->rchild=NULL;
	s->data=level[0];
	int i=search(in,level[0],l,r);
	int LN=i-l;char LLevel[LN];
	int RN=R-1;char Rlevel[RN];
	getSubLevel(LLevel,level,in,n,L,i-1);
	getSubLevel(RLevel,level,in,n,i+1,r);
}
```
