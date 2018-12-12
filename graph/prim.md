---
Description: This file is about Prim and kruskal.
---
# 普里姆算法和克鲁斯卡尔算法
## 1.普里姆算法
>1)普里姆算法思想
>>从图中任意取出一个顶点，把它当做一棵树，然后从这棵树相接的边中选取一条最短的边，并将这条边及其所连接的顶点也并入这棵树，此时得到了一棵树有两个顶点，然后从与这颗树相接的边中选取一条最短的边，并将这条边及其所连接的顶点并入这棵树。重复这个过程直到所有顶点都进入树中，此时得到的树就是最小生成树。
>>>用普里姆算法构造最小生成树的过程中，需要建立两个数组：vset[]，lowcost[],vset[]=表示顶点已经被并入树中，lowcost[]数组存放当前生成树到剩余各顶点最短边的权重。 
>2)普里姆算法的执行过程<br>
从图中某一个顶点开始，构造生成树的算法执行过程如下：<br>
1>将v0到其他顶点的所有变当做侯选边；
2>重复以下步骤n-1次，使得其他n-1个顶点被并入并入生成树中。
  1]从侯选边中挑选出权值最小的边输出，并将与该边另一端相接的顶点v并入树中。
  2]考察所有剩余顶点vi，如果(v,vi) 的权值比lowcost[vi]小，则用(v,vi)的权值更新lowcost[vi].
具体算法如下：
```c
void Prim(MGraph g,int v0,int &dum)
{
	int lowcost[maxSize],vset[maxSize],v;
	int i,j,k,min;
	v=v0;
	for(i=0;i<g.n;++i)
	{
		lowcost[i]=g.edge[v0][vi];
		vset[i]=0;
	}
	vset[v0]=1;
	sum=0;
	for(i=0;i<g.n-1;++i)
	{
		min=INF;	//INF为一个已经定义的比图中所有边的权重都大的值。
		for(j=0:j<g.n-1;++j)
		if(vset[j]==0&&lowcost[j]<min)
		{
			min=lowcost[j];
			k=j;
		}
		vset[k]=1;
		v=k;
		sum+=min;
		for(j=0;j<g.n-1;++j)
			if(vset[j]==0&&g.edges[v][j]<lowcost[j])
				lowcost[j]=g.edges[v][j];
	}
}
```
>3)普里姆算法的时间复杂的分析
普里姆算法的时间复杂度是O(n^2)，普里姆算法的时间复杂度只与图中顶点有关系，与边数没有关系，因此普里姆算法适用于**稠密图**

