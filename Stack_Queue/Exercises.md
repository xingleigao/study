---
description: This file is about Stack and Queue.
---

P77 写出一个算法，判断所给的操作序列是否合法。若合法，返回1，否则返回0（假定被判定的操作序列已存入一维char型数组ch[]中，操作序列以“\0”为结束符）：假设以I和O分别表示入栈和出栈操作。
```c
	int judge(char ch[])
	{
		int i=0,I=0,O=0;
		while(ch[i]!='\0')
		{
			if(ch[i]=='I')	++I;
			if(ch[i]=='O')	++O;
			if(O>I)	return 0;
			++i;
		}
		if(I!=O)	return 0;
		else	return 1;
	}
```

p77假设以带头结点的循环链表表示队列，并且只设一个指针指向队尾结点，但不设头指针，请写出相应的如队列和出队列算法。
1>入队
```c
	void enQueue(LNode *&rear,int x)
	{
		LNode *s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		s->next=rear->next;
		rear->next=s;
		rear=s;
	}
```
2>出队
```c
	void deQueue(LNode *&rear,int &x)
	{
		LNode *s;
		if(rear->next==rear)	return 0;
		else
		{
			s=rear->next->next;
			rear->nest->next=s->next;
			x=s->data;
			if(s==rear)	rear=rear->next;
			free(s);
			return 1
		}

	}
```

p77 如果允许在循环队列的两端都可以进行插入或者删除操作，要求：
1）写出循环队列的类型定义；
2）分别写出从队尾插入和从队头插入的算法；
解：
１）结构体定义
```c
	typedef struct
	{
		int data[maxSize];
		int front,rear;
	}cycqueue;
```
2)
-出队算法
```c
	int deQueue(cycqueue &Q,int &x)
	{
		if(Q.front==Q.rear)	return 0;
		else
		{
		x=Q.data[rear];
		Q.rear=(Q.rear-1+maxSize)%maxSize;
		return 1;
		}
	}
```
-入队算法
```c
	int enQueue(cycqueue &Q,int x)
	{
		if(Q.rear==(Q.front-1+maxSize)%maxSize)	return 0;
		else
		{
		Q.data[Q.front]=x;
		Q.front=(Q.front -1+maxSize)%maxSize);
		return 1;
		}
	}


		}
