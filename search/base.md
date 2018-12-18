---
Descrition: the file is about base of search.
---
# 查找
## 1.查找的基本概念
给定一个值k，在含有n个记录的表中找出关键字等于K的记录。若找到，则查找成功，返回该记录的信息或者该记录在表中的位置。否则查找失败，返回相关的指示信息。
ASL的相关概念 P276
## 2.顺序查找法
从标的一段开始，顺序扫描线性表，依次将扫描到的关键字和给定值k比较，若当前扫描的关键字与k相等，则查找成功。否则查找失败。
1. 顺序表代码如下：
```c
int Search(int a[],int n,int k)
{
	int i;
	for(i=0;i<n;++i)
		if(a[i]==k)	return i;
	return 0;
}
```
2. 线性表代码如下：
```c
LNode* Search(LNode* head,int key)
{
	LNode* p=head->next;
	while (p!=NULL)
	{
		if(p->data==key)
			return p;
		p=p->next;
	}
	return NULL;
}
```
## 3.折半查找法
1. 要求线性表是有序的
2. 算法如下:
```c
int Bsearch(int R[],int low,int high,int k)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(R[mid]==k)
			return mid;
		else if(R[mid]>k)
			high=mid-1;
		else	low=mid+1;
	}
	return 0;
}
```
3. 折半查找判定树建立
P278
