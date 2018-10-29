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
- 出队算法
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
- 入队算法
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

```
8)设计一个循环队列，用front和rear分别作为队头队尾指针，另外用一个标志tag表示队列是空还是不空，约定当tag为0时队空,当tag为1时队不空，这样就可以用front==rear作为队满的条件，要求：设计队列的结构和相关基本运算算法;
- 结构体定义
```c
	typedef struct
	{
		int data[maxSize];
		int front,rear;
		int tag;	
	}Queue;
```
- 定义一个队列
```c
	Queue qu;
```
- 队列的各要素
```c
	qu.tag=0;qu.front=qu.rear;	//初始化
	qu.tag=1&&qu.front=qu.rear	//队满条件
	qu.tag=0&&qu.front=qu.rear	//队空条件
```
- 算法实现
```c
	void initQueue(Queue &qu)	//初始化队列
	{
		qu.front=qu.rear;
		qu.tag=0;
	}
	int isQueueEmpty(Queue qu)	//判断是否为空
	{
		if(qu.tag=0)	return 1;
		else	return 0;
	}
	int QueueFull(Queue qu)		//判断是否队满
	{
		if(qu.tag==1&&qu.front==qu.rear)	return 1;
		else return 0;

	}
	int enQueue(Queue qu,int x)		//元素进队
	{
		if(QueueuFull(qu)==1)		return 0;
		else
		{
			qu.rear=(qu.rear+1)%maxSize;
			qu.data[qu.rear]=x;
			qu.tag=1;
			return 1;		
		}
	}
	int deQueue(Queue &qu,int &x)
	{
		if(qu.tag==0)	return 0;
		else
		{
			qu.front=(qu.front+1)%maxSize;
			x=qu.data[qu.front];
			if(qu.front==qu.rear)	qu.tag=0;
		}
	}
```
9)编写一个算法，将一个非负的十进制整数Ｎ转换为一个二进制数。
```c
	int BaseTrans(int N)
	{
		int i,result=0;
		int Stack[maxSize],top=-1;
		while(N!=0)
		{
			i=N%2;
			N=N/2;
			Stack[++top]=i;
		}
		while(top!=-1)
		{
			i=Stack[top--];
			result=result*10+i;
		}
		return result;
	}
```
10)试编写一个算法，检查一个程序中的花括号、方括号和圆括号是否配对，若全部配对，则返回１，否则返回０．对于程序中出现的一堆单引号或者双引号内的字符不进行括号检查。39为单引号的ASCII值，34为双引号的ASCII值，单引号和双引号如果出现则必成对出现。
	假设stack是已定义的顺序栈结构体。可以直接调用的元素进栈/出栈、取栈顶元素、判断栈空的函数定义如下：
```c
	void push(stack &s,char ch);
	void pop(stack &s,char &ch);
	void getTop(stack &s,char &ch);
	int isEmpty(stack s);
```
解题
```c
	int breaketsCheck(char f[])
	{
		stack S;char ch;
		char *p=f;
		while (*p!='\0')
		{
			if(*p==39)
			{
				++p;
				while(*p!=39) ++p;
				++p;
			}
			else if(*p==34)
			{
				++p;
				while(*p!=34) ++p;
				++p;
			}
			else
			{
				switch(*p)
				{
					case '{':
					case '[':
					case '(': push(S,*p);
						break;
					case '}': getTop(S,ch);
						if(ch=='{') pop(S,ch);
						else return 0;
						break;
					case ']': getTop(S,ch);
						if(ch=='[') pop(S,ch);
						else return 0;
						break;
					case ')': getTop(S,ch);
						if(ch=='(') pop(S,ch);
						else return ;
				}
				++p;
			}
		}

		if(isEmpty(S))
			return 1;
		else return 0 ;
	}
```
2.思考题
１）求解二次方根的迭代函数定义如下：
	sqrt(A,p,e)	= p |p^2-A|< ｅ
			  sqrt(A,(p+A/p)/2,e) |p^2-A|< ｅ
p是Ａ的近似二次方根，e是结果允许的误差。试写出相应的递归算法和非递归算法；

解：
1)递归 
```c
float Sqrt_A1(float A,float p,float e)
{
	if(fabs(p*p-a)<e)
		return p;
	else return Sqrt_A1(A,(p+A/p)/2,e);
}
```
2)非递归
```c
float Sqrt_A2(float A,float p,float e)
{
	while(fabs(p*p-A)>=e)
		p=(A/p+p)/2;
	return p;
}
```
2)设计一个递归算法，求n个不同字符的所有全排序列。
```c
void perm2(char str[],int k,int n)
{
	int i,j;
	char temp;
	if(k==0)
	{
		for(j=0;j<n-1;++n)
		cout<<str[j];
	}
	else
	{
		for(i=0;i<=k;++i)
		{
		temp=str[k];
		str[k]=str[i];
		str[i]=temp;
		perm2(str,k-1,n);
		temp=str[i];
		str[i]=str[k];
		str[k]=temp;
		}
	}
}
```

