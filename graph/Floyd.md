---
Description: the file is about Floyd.
---
# 弗洛伊德算法（任一一对顶点间的最短路径）
### 1.弗洛伊德算法思路
>对于每个顶点V，和任一顶点对（i,j），i！=j,v!=i,v!=j,若A[i][j]>A[i][v]+A[v][j]的值，并且将Path[i][j]改为v。
>>Path[][]数组初始值为-1；<br>
>>A[][]数组初始值为与最开始的结点的连接情况，有连接为权重，无连接为无穷大，本身为0；
>由path数组找两点间最短的路径
代码如下：
```c
void printfPath(int u,int v,int path[][max])
{
	if(path[u][v]==-1)
		直接输出；
	else
	{
		int mid=path[u][v];
		printPath(u,mid,path);
		printPath(mid,v,path);
	}
}
```
>Floyd代码如下：
```c
void Floyd(int n,float MGraph[][n],int Path[][n])
{
	int i,j,v;
	int A[n][n];
	for(i=0;i<n;++n)
		for(j=0;j<n;++n)
		{
			A[i][j]=MGraph[i][j];
			Path[i][j]=-1;
		}
	for(v=0;v<n;++v)
		for(i=0;i<n;++i)
			for(j=0;j<n;++j)
				if(A[i][j]=A[i][v]+A[v][j])
				{
					A[i][j]=A[i][v]+A[v][j];
					Path[i][j]=v;
				}
}
```
### 2.弗洛伊德算法时间复杂度
由弗洛伊德算法的时间消耗主要由三个循环决定，所以弗洛伊德算法的时间复杂度为O(n^3)
