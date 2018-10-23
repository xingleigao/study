//初始化栈
	void initStack(SqStakc &st)
	{
		st.top=-1;
	}
	//简化版本：
		int stack[maxSize];st.top=-1;
//判断栈空的代码
	int isEmpty(SqStck &st)
	{
		if(st.top==-1)
			return 1;
		else
			return 0;
	}
//出栈代码
	int pop(SqStack &st,int &x)
	{
		if(st.top==0)
			return 0;
		x=st.data[st.top];
		--st.top;
		return 1;
	}
	//简化版本 
		x=st.data[top--];
//进栈代码
	int push(SqStack &st,int &x)
	{
		if(st.top==maxSize-1)
			return 0;
		++st.top;
		x=st.data[st.top];
		return 1;
	}
	//简化版本
		st.data[++top]=x;
