----
description:This file is about Stack and Queue.
----
#
##P77 写出一个算法，判断所给的操作序列是否合法。若合法，返回1，否则返回0（假定被判定的操作序列已存入一维char型数组ch[]中，操作序列以“\0”为结束符）：假设以I和O分别表示入栈和出栈操作。
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
