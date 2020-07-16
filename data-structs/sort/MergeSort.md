---
Description: the file is about merge sort.
---
# 归并排序
## 二路归并排序
### 1.执行过程
看做一个分而治之的过程，先将整个序列分为两半，对每一半分别进行归并排序，将得到两个有序序列，然后将这两个序列归并成一个序列。
### 2.算法代码
```c
void merge(int arr[],int low,int mid,int high)
{
	int i,j,k;
	int n1=mid-low+1;
	int n2=high-mid;
	int L[n1],R[n2];
	for(i=0;i<n1;++i)	L[i]=arr[low+i];
	for(j=0;j<n2;++j)	R[j]=arr[mid+1+j];
	i=0;j=0;k=low;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])	arr[k]=L[i++];
		else	arr[k]=R[j++];
		++k;
	}
	while(i<n1)	arr[k++]=L[i++];
	while(j<n2)	arr[k++]=R[j++];
}
void mergeSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
```
### 3.性能分析
1. 时间复杂度 O(nlog2n)
2. 空间复杂度 O(1)
