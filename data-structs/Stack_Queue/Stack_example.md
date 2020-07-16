## p61 例题3-1：
C语言里算术表达式中的括号只有小括号，编写程序，判断一个表达式中的括号是否正确配对，表达式已经存入字符数组exp[]中，表达式中的字符个数为n。
## 分析：
在解决问题的过程中出现了一个子问题，但凭现有条件不能解决它，需要记下，等待以后出现可以解决他的条件后在返回来解决。
```c
//栈具有记忆性。
	int match(char exp[],int n)
	{
		char stack[maxSize];int top=-1; 
		int i;
		for(i=0;i<n;++i)
		{
			if(exp[i]=="(")
				stack.data[++top]="(";
			if(exp[i]==")";
			{	
				if(top==-)
					return ;
				else
					--top;
			}
		}
		if(top==-)
			return 1;
		else
			return 0;
	}
```

## 例3-2：
编写一个函数，求后缀式的数值，其中后缀式存于一个字符数组exp中，exp中最后一个字符为“/0"，作为结束符，并且假设后缀式中的数字都只有一位。本题中所出现的除法运算，皆为整除运算。
```c
	int op(int a,char Op,int b)			//运算函数
	{
		if(Op=='+')	return a+b;
		if(Op=='-')	return a-b;
		if(Op=='*')	return a*b;
		if(Op=='/')
		{	
			if(b==0)
			{
				cout<<"ERRPR"<<end1;
				return 0;
			}
			else	return a/b;
	}
	
	int com(char exp[])
	{
		int i,a,b,c;
		int Stack[maxSize];	int top=-1;
		char Op;
		for(i=0;exp[i]!='/0';==i)
		{
			if(exp[i]>='0'$$exp[i]<='9')
				Stack[++top]=exp[i]-'0';
			else
			{
				Op=exp[i];
				a=Stack[top--];
				b=Stack[top--];
				c=op(a,Op,b);
				Stack[++top]=c;
			}
		}
		return Stack[top];
	}
```			