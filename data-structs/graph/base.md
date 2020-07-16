---
Description: This file is about the graph.
---
# 图的存储结构
## 1.邻接矩阵
>邻接矩阵的结构型定义：
```c
typedef struct	//顶点信息定义
{
	int no;
	char info;
}VertexType;

typedef struct
{
	int edges[maxSize][maxSize];
	int n,e;
	VertexType vew[maxSize];
}MGraph;
```
## 2.邻接表
>邻接表存储表示的定义：
```c
typedef struct ArcNode
{
	int adjV;
	struct ArcNode* nextarc;
	int info;				//此句为边的权重等信息，一般不写；
}ArcNode;
typedef strct
{
	char data;
	ArcNode *firsrarc;
}VNode;
typedef struct
{
	VNode adjList[maxSize];
	int n,e;
}AGraph;
```
### 3.十字链表
>{data,firstin,firsrOut} {start,end,nextin,nextOut}
### 4.邻接多重表
>>无向表的邻接多重表
>>>{Data,fist} {vi,vinext,vj,vjnext}<br>
>>{vertex,fistedge} {mark,ivex,ilink,jvex,jlink,info}

