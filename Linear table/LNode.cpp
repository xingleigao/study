 //标准尾插法建立新链表
 void creatlistR(LNode *&C,int a[],int n)
 {
 	LNode *s,*r;
 	int i;
 	C=(LNode *)malloc(sizeof(LNode));
 	C->next=NULL;
 	r=C;
	for(i=0;i<n;++i)
	{
		s=(LNode *)malloc(sizeof(LNode));
		s->data=a[i];
		r->next=s;
		r=r->next;		
	 } 
	r->next=NULL;
	
  } 
//标准头插法建立新链表
voild createlistF(LNode *&C,int a[],int n) 
{
	LNode *s;
	int i;
	C=(LNode *)malloc(sizeof(LNode));
	c->next=NULL;
	for (i=0;i<n;i++)
	{
		s=(LNode *)malloc(sizeof(LNode));
		s->data=a[i];
		s->next=C->next;
		C-next=s; 
	}
}
//插入节点的操作代码
s->next=C->next;
C->next=s; 
//删除节点的操作代码
q=p->next;
p->next=p->next->next;
free(q);
//查找链表C（带头结点）中是否存在一个值为x的结点，若存在，则删除该结点兵返回1，否则返回0。
int findAndDelete(LNode *C,int x)
{
	LNode *P,*q;
	p=C;
	while(p->next!=NULL)
	{
		if(p->next->data==x) 
			break;
		p=p->next;
	}
	if(p->next=NULL)
		return 0;
	else
	{
		q=p->next;
		p->next=p->next->next;
		free(q);
		return 1;	
	}
 } 
//A和B是两个单链表（带表头结点），其中元素递增有序。设计一个算法，将A和B归并成一个按元素值非递减有序的链表C,C由A和B中的结点组成。
void merge(LNode *A,LNode *B,LNode *&C)
{
	LNode *p=A->next;
	LNode *q=A->next;
	LNode *r;
	C=A;
	C->next=NULL;
	free(B);
	r=C;
	while(p!==NULL&&q!==NULL)
	{
		if(p->data<=q->data)
		{
			r->next=p;p=p->next;
			r=r->next;
		}
		else
		{
			r->next=q;q=q->next;
			r=r->next;
		}
	}
	r->next=NULL;
	if(p!=NULL) r->next=p;
	if(q!=NULL) r->next=q;
 } 
//若将上题中条件改为非递增有序链表C，则需要使用头插设计。
void merge(LNode *A,LNode *B,LNode *&C)
{
	LNode *p=A->next;
	LNode *q=B->next;
	Lnode *s;
	C=A;
	C->next=NULL;
	free(B);
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<=q->data)
		{
			s=p;p=p->next;
			s->next=C->next;
			C->next=s;
		}
		else
		{
			s=q;q=q->next;
			s->next=C->next;
			C-next=s;
		}
	}
	while(p!=NULL)
	{
		s=p;
		p=p->next;
		s->next-C->next;
		C->next=s;
	}
	while(q!=NULL)
	{
		s=q;
		q=q->next;
		s->next=C->next;
		C-next=s;
	}
 } 
