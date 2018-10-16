//双链表的操作
	//采用尾插法建立链表
void createDlishR(DLNode *&L,int a[],int n)
{
	DLNode *s,*r;
	int i;
	L=(DLNode *)malloc(sizeof(DLNode));
	L->prior=NULL;
	L->next=NULL;
	r=L;
	for(i=0;i<n;++i)
	{
		s=(DLNode *)malloc(sizeof(DLNode));
		s->data=a[i];
		r->next=s;
		s->prior=r;
		r=s;
	}
	r-next=NULL;
 } 	
 	//查找结点算法
void findNode(DLNode *&L)
{
	DLNode *p=C->next;
	while(p!=NULL)
	{
		if(p->data==x)
			break;
		p=p->next; 
	}
	return p;
 } 
 	//插入结点算法
s->next=p->next;
s->prior= p;
p->next= s;
p->next->prior=s;
	//删除结点算法
q=p->next;
p->next=q->next;
q->next->prior=q;
free(q);
