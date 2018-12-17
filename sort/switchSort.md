---
Description: the file is about sort of switch.
---
# 交换类排序
## 起泡排序
### 1.算法介绍
>起泡排序又名**冒泡排序**，他通过不断比较交换的方式进行排序，第一次将最大的数字交换到最后一个，第二次将第二大的交换到倒数低二个......。注意的是**冒泡排序算法接受的条件是在一趟排序过程中没有发生关键字的交换**
### 2.算法代码
```c
void BublleSort(int R[],int n)
{
	int i,j,flag;	int temp;
	for(i=n-1;i>=1;--i)
	{
		flag=0;
		for(j=1;j<i;++i)
		{
			temp=R[j];
			R[j]=R[j-1];
			R[j-1]=temp;
			flag=1;
		}
		if(flag==0)
			return;
	}
}
```
### 3.性能分析
1. 时间复杂度分析<br>
	1. 最坏情况：O(n^2);
	2. 最好情况：O(n);
	综上，时间复杂度为O(n^2);
2. 空间复杂度
额外的辅助空间只需要一个temp;所以空间复杂度为o(1);
---
## 快速排序
### 1.算法介绍
每一趟选择当前所有子序列中的一个关键字作为**枢纽**，将子序列中比枢纽小的移到枢纽的前边，比枢纽打的移到枢纽后边。
### 2.快速排序算法的代码
```c
void quickSort(int arr[],int low,int high)
{
	int temp;
	int i=low,j=high;
	if(low<high)
	{
		temp=arr[low];
		while(i<j)
		{
			while(j>i&&arr[j]>=temp) --j;
			if(i<j)
			{
				arr[i]=arr[j];
				++i;
			}
			while(i<j&&arr[i]<temp) ++i;
			if(i<j)
			{
				arr[j]=arr[i];
				--j;
			}
	}
	arr[i]=temp;
	quickSort(arr,low,i-1);
	quickSort(arr,i+1,high);
}
```
### 3.性能分析
1. 时间复杂度
	平均情况下时间的复杂度为O(nlog2n);
2. 空间复杂度
	因为系统栈的调用，需要的空间复杂度为O(nlog2n)。
