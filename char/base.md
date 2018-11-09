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
## 1.赋值操作
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
## 2.取串长度操作
```c
int strlength(Str str)
{
	return str.length;
}
```
### 使用情况
```c
str.length
```
##　3.串的比较操作
```c
int strconmpare
{
	for(int i=0;i<s1.length && i<s2.length;++i)
		if(s1.ch[i]!=s2.ch[i])
			return s1.ch-s2.ch;
	return s1.length-s2.length;
}
```
## 4.串连接操作
```c
int concat(Str& str,Str str1,Str str2)
{
	if(Str.ch)
	{
		free(str.ch);
		str.ch=NULL;
	}
	str.ch=(char*)malloc(sizeof(char)*(str1.length+str2.length+1);
	if(str.ch==NULL)
		ertutn 0;
	int i=0;
	while(i<str1.length)
	{
		str.ch[i]=str1.ch[i];
		++i;
	}
	int j=0;
	while(j<=str2.length)
	{
		str.ch[i+j]=str2.ch[j];
		++j;
	}

	str.length=str1.lengtg+str2.length+1;
	return 1;
}
```
## 5.求子串操作
```c
int substring(Str &substr,Str str,int pos,int len)
{
	if(pos<0||pos>str.length||len<0||len>str.length-pos)
		return 0;
	if(substr.ch)
	{
		free(substr.ch);
		subsrr.ch=NULL;
	}
	if(len==0)
	{
		substr.ch=NULL;
		substr.length=0;
		return 1;
	}
	else
	{
		substr.ch=(char*)malloc(sizeof(char)*len+1);
		int i=pos;
		int j=0;
		while(i<pos+len)
		{
			substr.ch[j]=str.ch[i+j];
			++i;
			++j;
		}
		substr.ch[j]='/0';
		subsrr.length=len;
		return 1;
	}
}
```
## 6.串清空操作
```c
int clearstring(Str &str)
{
	if(str.ch)
	{
		free(str.ch)
		str.ch=NULL;
	}
	str.length=0;
	return 0;
}
