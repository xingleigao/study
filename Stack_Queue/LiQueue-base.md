## 链队
### 两个状态
```c
	1qu->rear==NULL;/1qu->front==NULL;		//队空
							//不存在队满的情况
```	
## 两个操作
```c
	1qu->rear->next=p;1qu->rear=p;			//元素进队
	p=1qu->front;1qu->front=p->next;x=p.data;free(p);//元素进队
```
## 初始化队列
```c
	void initQueue(LiQueue *&1qu)
	{
		1qu=(LiQueue*)malloc(sizeof(LiQueue));
		1qu->front=1qu->rear=NULL;
	}
```
## 判断队为空
```c
	int isQueueEmpty(LiQueue *1qu)
	{
		if(1qu->front==0||1qu->rear==0)
		return 1;
		return 0;
	}
```
## 入队
```c
	void enQueue(LiQueue *1qu,int x)
	{
		QNode *p;
		p=(QNode*)malloc(sizeof(QNode));
		p.data=x;
		p->next=NULL;
		if(1qu->rear=NULL||1qu->front=NULL)
			1qu->front=1qu->rear=p;
		else
		{
			1qu->rear->next=p;
			1qu->rear=p;
		}
	}
```
## 出队
```c
	int deQueue(LiQueue *1qu,int &x)
	{
		QNode *p;
		if(1qu->rear==NULL)
			return 0;
		else
			p=1qu->front;
		if(1qu->rear==1qu->front)
			1qu.front=1qu.rear=NULL;
		else
			1qu.front=p->next;
		x=p.data;
		free(p);
		return 1;
	}
```