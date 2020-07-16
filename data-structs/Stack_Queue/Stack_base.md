## 链栈的初始化
```c
void initStack(LNode*&1st)
{
	1st=(LNode*)malloc(sizeof(LNode));
	1st->next=NULL;
}
```	
## 判断链栈是否为空
```c
void isEmpty(LNode*&1st)
{
	if(1st->next==NULL)
		return 1;
	else
		return 0;
}
```
## 进栈代码
```c
void push(LNode*&1st,int x）
{
	LNode *p;
	p=(LNode*)malloc(sizeof(LNode));
	p->next=NULL;		//非必要 但是形成习惯比较好。
	p->data=x;
	p->next=1st.next;
	1st.next=p;
}
```
## 出栈代码
```c
void pop(LNode*&1st,int &x)
{
	LNode *p;
	if(1st->next==NULL)
		return 0;
	p=1st->next;
	x=p->data;
	1st->next=p->next;
	free(p);
	return 1;
}
```