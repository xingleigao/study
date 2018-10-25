//请利用两个栈s1、s2来模拟一个队列,假设栈中的元素为int型，栈中元素最多为maxSize。已知栈的三个运算定义如下:
	//push(ST,x):元素x进栈。
	//pop(ST,&x):元素x出栈。
	//isEmpty(ST):判断st是否为空。
	//如何利用栈的运算来实现该队列的三个运算:enQueue,deQueue,isQueueEmpty。要求：
	//(1)给出设计思路
	//(2)根据你所设计的算法，用C或C++语言描述算法，关键之处给出注释。
	//分析：栈的特点是先进后出，队列的特点是先进先出。所以，当用两个栈s1、s2模拟一个队列时，s1作为输入栈，逐个元素压栈，以此模拟队列元素的入队，当需要出队时，将栈s1退栈并逐个压入栈s2中，s1中最先入栈的元素在s2的栈顶。s2退栈。相当于队列的出队，实现了先进先出。只有栈s2为空且s1为空时，才算队列空。
	int enQueue(SqQueu &s1,SqQueue &s2,int x)	//s1为容量为maxSize的栈。本算法将x入栈，成功返回1；否则返回0；
	{
		int y;
		if(s1.top==maxSize-1)
		{
			if(!isEmpty(s2))
				return 0;		//s1满栈、s2非空，这时s1不能入栈，返回0；
			else if(isEmpty(s2))		//若s2为空，则先将s1退栈，元素压到s2
			{
				while(isEmpty(s1))	
				{
					pop(s1,y);
					push(s2,y);
				}
				push(s1,x);
				return 1;		//x入栈，实现了元素入队，返回1；
			}
		}
		else
		{
			push(s1,y);
			return 1;			//若s1没有满，则x直接入栈。返回1
		}
	}

	int deQueue(SqStack &s1,SqStack &s2,int &x)	//s2栈顶元素退栈实现出队操作,x接手出队元素，若成功则返回1，否则返回0；
	{
		int y;
		if(!isEmpty(s2))			//栈s2非空，则直接出队，返回1
		{
			pop(s2,x);
			return 1;
		}
		else					//处理s2空栈
		{
			if(!isEmpty(s1))		//先将s1元素压入s2，再作出队操作
			{
				while(!isEmpty(s1)
				{
					pop(s1,y);
					push(s2,y);
				}
				pop(s2,x);		//s2退栈，实现出队
				return 1;		//出队成功，返回1
			}
			else return 0;			//队空，返回0
		}
	}
	
	int isQueueEmpty(SqStack &s1,SqStack &s2)
	{
		if(isEmpty(s2)&&isEmpty(s1))
			return 1;			//队列空
		else
			return 0;			//队列不空
	}
