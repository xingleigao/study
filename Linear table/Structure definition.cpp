//链表定义
	//顺序链表	 
#define maxSize 100
typedef struct
{
	int data[maxSize];
	
	int length;
 } Sqlist;
 
	//考试常用
 typedef struct
 {
 	int A[maxSize];
 	in n;
 	
 }
 
	//单链表 
typedef  struct LNode
{
	int data;
	struct LNode *next;
 }LNode;
	//双链表
typedef struct DLNode
{
	int data;
	struct DLNode *prior;
	struct DLNode *next;
 }DLNode;
 	
