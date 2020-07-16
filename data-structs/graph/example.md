---
Description: This file is about the example of graph.
---
# P190[例7-1]设计一个算法，求不带权无向连通图G中距离顶点最远的一个顶点（所谓最远就是到达V的路径长度最长）
>分析:<br>
图的广度优先搜索遍历方式体现了由图中某个顶点开始，以由近向远层层扩展的方式遍历图中结点的过程，因此广度优先搜索遍历过程中最后一个顶点一定是距离给定顶点最远的顶点。因此，只需修改广度优先搜索算法，返回最后一个顶点即可。<br>
>>代码如下：
```c
//假设本题用邻接表作为图的存储结构。
int BFS(AGraph *G,int v)
{
	ArcNode *p;
	int que[maxSize],front=0,rear=0;
	int visit[maxSize];
	int i,j;
	for(i=0;i<G->n;++i) visit[i]=0;
	rear=(rear+1)%maxSize;
	que[rear]=v;
	visit[v]=1;
	while(front!=rear)
	{
		front=(front+1)%maxSize;
		j=que[front];
		p=G->adjlist[j].firstarc;
		while(p!=NULL)
		{
			if(visit[p->adjex]==0)
			{
				visit[p->adjevs]=1;
				rear=(rear+1)%maxSize;
				que[rear]=p->adjex;
			}
			p=p->next;
		}
	}
	return j;	//队空时 j保存了遍历过程中的最后一个顶点。
}
```
# [例7-2]设计一个算法，判断一个无向图G是否是一棵树，若是树，返回一，否则，返回0;
>分析：<br>
一个无向图是一个树的判断条件是有n-1条边的连通图，n为图中顶点个数。边和顶点的数目是否满足条件可由图的信息直接判断，连通与否可以用遍历是否访问到所有的顶点来判断。
>>代码如下：
```c
int DFS2(AGraph *G,int v,int &vn,int &en)
{
	ArcNode*p;
	visit[v]=1;
	++vn;
	p=G->adjlist[v].firstarc;
	while(p!=NULL)
	{
		++en;
		if(visit[p->adjvex]==0)
			DFS2(G,p->adjvex,ve,en)
		p=p->next;
	}
}
int GisTree(AGraph *G)
{
	int vn=0,en=0;
	for(i=0;i<G->n;++i)
		visit[i]=0;
	DFS2(G,1,vn,en);
	if(vn==G->n&&(G->n-1)=en/2)
		return 1;
	return 0;
}
```
# [例7-3] 图采用邻接表存储，设计一个算法。判别顶点i和顶点j(i!=j)直接是否有路径。
>分析：<br>
从顶点i开始进行一次深度搜索遍历，遍历过程中遇到j说明i与j之间有路径，否则没有路径。
>>算法代码如下：
```c
int DFSTrave(AGraph *G,int i,int j)
{
	int k;
	for(k=0;k<G->n;++k)
		visit[k]=0;
	DFS(G,i);
	if(visit[j]==1)
		return 1;
	return 0;
}
```
