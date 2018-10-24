//循环队列
	//两个状态
	qu.rear==qu.front; 			//队空
	(qu.rear+)%maxSize==qu.front;		//队满
	//两个操作
	qu.rear=(qu.rear+1)%maxSize;qu.data[qu.rear]=x;//进队
	qu.front=(qu.front+1)%maxSize;x=qu.data[qu.front];//出队
//初始化队
	void initQueue(SqQueue &qu)
	{
		qu.front=qu.rear=0;
	}
//判断队是否为空
	int isQueueEmpty(SqQueue &qu)
	{
		if(qu.rear==qu.front)
		return 1;
		else
		return 0;
	}
//进队算法
	int enQueue(SqQueue &qu,int x)
	{
		if((qu.rear+1)%maxSize==qu.front)
		return 0;
		qu.rear=(qu.rear+1)%maxSize;
		qu.data[qu.rear]=x;
		return 1;
	}
//出队算法
	int deQueue(SqQueue &qu,int &x)
	{
		if(qu.rear==qu.front)
		return 0;
		qu.front=(qu.front+1)%maxSize;
		x=qu.data[qu.front];
	}
