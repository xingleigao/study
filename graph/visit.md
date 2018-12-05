---
Description: Thie file is about how to visit a graph.
---
# 图的遍历算法操作
## 1.图的深度优先搜索遍历（DFS）
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
## 2、图的广度优先搜索算法(BFS)
>首先访问其实点v，然后选取与V邻接的全部顶点进行访问，在一次访问与w1,...,wn邻接的全部节点，直到所有顶点都被访问为止。<br>
执行过程中需要一个队列，执行过程简单概括如下：<br>
- 任取图中一个节点访问，入队，并将这个节点标记为已访问。
- 当队列不为空时循环执行：出队，以此检查出队顶点的所有邻接顶点，访问没有被访问过的邻接顶点并将其入队。
- 当队列为空时跳出循环，广度优先搜索完成
```c
void BFS(AGraph *G,int v,int visit[maxSize])
{
	AGraph *p;
	int que[maxSize],front=0,rear=0;
	int j;
	Visit(v);
	visit[v]=1;
	rear=(rear+1)%maxSize;
	que[rear]=v;
	while(front!=rear)
	{
		front=(front+1)%maxSize;
		j=que[front];
		p=G->adjlist[j].firstarc;
		while(p!=NULL)
		{
			if(visit[p-adjvex]==0)
			{
				Visit(p->adjvex);
				visit[p->adjvex]=1;
				rear=(rear+1)%maxSize;
				que[rear]=p->adjvex;
			}
			p=p->nextarc;
		}
	}
}
```
