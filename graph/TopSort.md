---
Description: The file is about TopSort.
---
## 拓补排序
### 1.AOV网（Activity On Vertex network，AOV）活动在顶点上的网
>活动在顶点上的网，是一种可以形象地反映出整个工程中各个活动之间的先后关系的有向图。
AOV网是一种以顶点表示活动，以边表示活动的先后次序且没有回路的有向图即可。
### 2.拓补排序核心算法
>在一个有向图中找到一个拓补排序序列的过程如下：
- 从有向图中选择一个没有前驱（入度为0）的顶点输出； 1
- 删除1）中的顶点，并且删除从该顶点发出的全部边； 2
- 重复上述两步，直到剩余的图中不存在没有前驱的顶点为止。 3
>修改邻接表的存储结构以使其更适合拓扑结构
```c
typedef struct
{
	char data;
	int count;
	ArcNode *firstarc;
}VNode;
```
>拓扑排序的代码如下：
```c
int TopSort(AGraph *G)
{
	int i,j,n=0;
	int stack[maxSize],top=-1;
	ArcNode *p;
	for(i=0;i<G->n;++i)
		if(G->adjlist[i].count==0)
			stack[++top]=i;
	while(top!=-1)
	{
		i=stack[--top];
		++n;
		count<<i<<" ";
		p=G->adjlist[i].firstarc;
		while(p!=NULL)
		{
			j=p->adjvex;
			--(G->adjlist[j].count);
			if(G->adjlist[j].count=0)
				stack[++top]=j;
			p=p->nextarc;
		}
	}
	if(n==G->n)
		return 1;
	else
		return 0;
}
```

