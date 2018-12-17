---
Description: the file is about the sort of selection.
---
# 选择类排序
## 简单选择排序
### 1.简单选择排序
>算法思路：<br>
从头到尾选择一个最小的元素让其与第一个数据进行交换，然后从除了第一个元素中选择最小的元素让其与第二个元素进行交换，直到最后的元素交换结束。
### 2.算法代码
```c
void SelectSort(int R[],int n)
{
	int i,j,k;
	int temp;
	for(i=0;i<n;++i)
	{
		k=i;
		for(j=i+1;j<n;++j)
			if(R[k]>R[j])
				k=j;
		temp=R[i];
		R[i]=R[j];
		R[j]=temp;
	}
}
```
### 3.性能分析
1. 时间复杂度： O(n^2)
2. 空间复杂度： O(1)
---
## 堆排序
### 1.算法介绍
堆是一种数据结构，可把它看做一颗完全二叉树，这课二叉树满足：任何一个非叶结点的值都不大于（不小于）其孩子结点的值，若孩子大父亲小，则叫小顶堆。否则叫大顶堆。
### 2.执行过程
#### 1.建堆
直接利用数组建堆。并做相应的调整P244
#### 2.插入结点
将插入结点放入最下方，然后将其依次向上调整到合适位置。
#### 3.删除结点
将最后一个结点填充孔洞，然后向下调整到合适位置。
### 3.堆排序的代码
```c
void Sift(int R[],int low,int high)
{
	int i=low,j=2*i;
	int temp=arr[i];
	while(j<=high)
	{
		if(j<high&&R[j]<R[j+1])	++j;
		if(temp<R[j])
		{
			R[i]=R[j];
			i=j;
			j=2*i;
		}
		else break;
	}
	R[i]=temp;
}
void headSort(int R[],int n)
{
	int i;
	int temp;
	for(i=n/2;i>=1;--i)
		Sift(R,i,n);
	for(i=n;i>=2;--i)
	{
		temp=R[1];
		R[1]=R[i];
		R[i]=temp;
		Sift(R,1,i-1);
	}
}
```
### 4.性能分析
1. 时间复杂度分析<br>
	O(nlog2n)
2. 空间复杂度<br>
	O(1)
### 5.适用情况
关键字较多时，例如从10000个关键字中选择出最小的十个。
