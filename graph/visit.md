---
Description: Thie file is about how to visit a graph.
---
# 图的遍历算法操作
## 1.树的深度优先搜索遍历（DFS）
>首先访问出发点v，并将其标记为已访问过；然后选取与v邻接的未被访问的任意一个顶点w；再选取与w邻接的未被访问的任一顶点并访问。<br>
当一个顶点所有邻接顶点都被访问过时，以此退回最近被访问过的顶点，若该顶点还有其他邻接顶点未被访问，则从这些未被访问的顶点中取一个并重复上述过程。
```c
int visit[maxSize];
void DFS(AGraph *G,int v)
{
	ArcNode *p;
	visit[v]=1;
	visit(v);
	p=G->adjlist[v].firstarc;
	while(p!=NULL)
	{
		if(visit[p->adjvex]==0)
			DFS(G,p->adjvex);
		p=p->next;
	}
}
```

