---
Description: This file is about str struct.
---
# 数组、矩阵以及广义表
## 矩阵
### 1.矩阵的声明
```c
#define m 4
#define n 5
int A[m][n];
```
### 2.矩阵的转置
```c
void trsmat(int A[][maxSize],int B[][maxSize],int m,int n)
{
	for(int i=0;i<m;++i)
		for(int j=0;j<n;++i)
			B[j][i]=A[i][j];
}
```
### 3.矩阵相加
```c
void addmat(int c[][maxSize],int A[][maxSize],int B[][maxSize],int  m,int n)
{
	for(int i=0;i<m;++i)
		for(j=0;
