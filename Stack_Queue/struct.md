## SqStack
```c
	typedef struct
	{
		int data[maxSize];	//存放栈中元素，maxSize为已定义常量
		int top;		//栈顶指针
 	}SqStack;			//顺序栈类型定义
```
## LNode
```c
	typedef struct LNode
	{
		int data;		//数据域
		struct LNode *next;	//指针域
	}LNode;				//链栈结点定义
	//Node stack is similar with LNode ;
```
## sqlist queue
```c
	typedef struct
	{
		int data[maxSize];
		int front;		//队首指针
		int rear;		//队尾指针
	}SqQueue;
```
## Queue LNode
```c	
	typedef struct QNode
	{
		int data;
		struct QNode *next;
	}QNode;
```
## list Queue
```c
	typedef struct
	{
		QNode *front;
		QNode *rear;
	}LiQueue;
```