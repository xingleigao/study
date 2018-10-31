---
Description: This file is about str struct.
---
# 定长顺序存储结构体定义
```c

typedef struct
{
	char str[maxSize+1];	//maxSize为已经定义的常量，表示串的最大长度；str数组长度定义为maxSize+1,是因为多出一个'\0'作为结束符
	int length;
}Str;
```
# 变长分配存储表示
```c
typedef struct
(
	char *ch;
	int length;
}Str;
```
# 串的基本操作
## 赋值操作
```c
int strassign(Str &str,char* ch)
{
	if(str.ch)
		free(str.ch);
	int len=0;
	char* c=ch;
	while(*c)			//求ch串的长度
	{
		++len;
		++c;
	}
	if(len==0)
	{
		str.ch==NULL;
		str.length=0;
		return 0;
	}
	else
	{
		str.ch=(char*)malloc(sizeof(char)*(len+1));
		if(str.ch==NULL)
			return 0;
		else
		{
			c=ch;
			for(int i=0;i<=len;++i,++c)
				str.ch[i]=*c;
				str.length=len;
				return 1;
		}
		
	}

}
```
### 具体的使用情况
```c
strassign(str,"cur input");
```
