### 为了充分利用空间，顺序栈s0、s1共享一个存储区elem[0,1,……,maxSize-1]。试设计共享栈s0、s1以及有关入栈出栈操作的算法，假设栈中元素为int型。要求：
1. 给出设计思路
2. 根据设计思路，采用C或C++语言描述算法（对于共享栈要给出结构体定义），关键处要给出注释。
## 分析
1. 顺序栈栈底固定不变，因此将栈底设置在储存区两端，即s0栈底设置在0处，s1栈底设置在maxSize-1处，栈顶在0～maxSize-1变动。当两栈顶相遇时即为栈满，这样可以尽可能利用空间。
2. s0的栈顶为top0,s0的如栈操作为:top0自增1，然后存入元素;出栈操作为:先取出栈顶元素，top0再自减1。s1的栈顶为s1,s1的入栈操作为:top1自减1，然后存入元素；出栈操作为:先取出栈顶元素，top1再自增1。
## 结构体定义
```c
	typedef struct
	{
		int elem[0,……,maxSize-1];		//栈空间，maxSize为已定义常量。
		int top[2];				//top[0]为s0栈顶，top[1]为s1栈顶。
	}SqStack;
```
## 入栈操作
```c
	int push(SqStack &st,int stNO,int x)		//stNO为栈编号，指示元素x入哪个栈
	{
		if(st.top[0]+1<st.top[1])		//栈不满，则元素可以进栈
		{
			if(stNO==0)			//元素进st0
			{
				++st.top[0];
				st.data[st.top[0]]=x;
				return 1;		//入栈成功，返回1
			}
			if(stNO==1)			//元素进st1
			{
				--st.top[1];
				st.data[st.top[1]]=x;
				return 1;		//入栈成功，返回1
			}
			else
			return -1;			//栈编号输入错误，返回-1
		}
		else
		return 0;				//栈满后元素不能入栈。返回0
	}
```	
## 出栈操作
```c
	int pop(SqStack &st,int stNO,int &x)		//stNO为栈编号，指示x接收哪个栈顶元素
	{
		if(stNP==0)				//st0元素出栈
		{
			if(!st.top[0])			//st0不为空，可以出栈
			{
				x=st.data[st.top[0]--];
				return 1;		//出栈成功，返回1
			}
			else
			return 0;			//st0栈空，不能出栈,返回0
		}
		if(stNO==1)				//st1元素出栈
		{
			if(st.top[1]!=maxSize-1)	//st1元素不为空，可以出栈
			{
				x=st.data[st.top[1]++];
				return 1;		//出栈成功，返回1
			}
			else return 0;			//栈空，出栈失败。返回0；
		}
		else return -1;				//输入栈编号错误。返回-1
	}
```
