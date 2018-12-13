---
Descripition: The file is about Dijkstra.
---
# 最短路径
## 迪杰斯特拉算法（某一顶点到其余各顶点的最短路径）
### 1.迪杰斯特拉算法思想
>设有两个顶点集合S和T，集合S中存放图中已找到最短路径的顶点，集合T存放图中剩余顶点。初始状态时，集合S中只包含源点V0,然后不断从集合T中选取到顶点V0路径长度最短的顶点Vu并入到集合S中。**集合S每并入一个新的顶点Vu都要修改顶点V0到集合T中顶点的最短路径长度值。**不断重复此过程，直到集合T的顶点全部并入S中为止。
### 2.迪杰斯特拉算法执行过程
>引进三个辅助数组：disk[],path[]和set[]。
- disk[]表示当前已找到的从V0到某个重点Vi的最短路径长度。它的初态为：若从v0到Vi有边，则dist[Vi]为边上的权值，否则设置为无穷。
- path[]保存从V0到Vi最段路径上Vi的前一个及诶按。初态为：若V0到Vi有边，则path为V0，否则，设置为-1；<br>**path[]数组其实保存了一棵树，这是一棵树双亲存储结构存储的树**
- set[]为标志数组，set[Vi]=0表示Vi在T中，即没有被并入最短路径；初态为：set[Vi]=1，其余元素全为0；
>path[]数组的路径打印函数如下：
```c
void printfPath(int path[],int a)
{
	int stack[maxSize],top=-1;
	while(path[a]!=-1)
	{
		stack[++top]=a;
		a=path[a];
	}
	stack[++top]=a;
	while(top!=-1)
		count<<stack[top--]<<" ";
	count<<end1;
}
```
>迪杰斯特拉算法代码如下：
```c
void Dijkstra(MGraph g,int v,int disk[],int path[])
{
	int set[maxSize];
	int min,i,j,u;
	for(i=0;i<g.n;++i)
	{
		disk[i]=g.edges[v][i];
		set[i]=0;
		if(gg.edges[v][i]<INF)
			path[i]=v;
		else
			path[i]=-1;
	}
	set[v]=1;path[v]=-1;		//初始化操作结束
	for(i=0;i<g.n-1;++i)
	{
		min=INF;
		for(j=0;j<g.n;++j)
			if(set[j]==0&&disk[j]<min)
			{
				u=j;
				min=disk[j];
			}
		set[u]=1;
		for(j<0;j<g.n;++j)
		{
			if(set[j]==0&&disk[u]+g.edges[u][j]<disk[j])
			{		
				disk[j]=disk[u]+g.edges[u][j];
				path[j]=u;
			}
		}
	}
}
```
