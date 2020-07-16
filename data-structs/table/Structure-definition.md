## 链表定义
### 顺序链表
```c	 
#define maxSize 100
typedef struct
{
	int data[maxSize];
	
	int length;
 } Sqlist;
 ```
### 考试常用
```c
 typedef struct
 {
 	int A[maxSize];
 	in n;
 }
 ```
### 单链表 
```c
typedef  struct LNode
{
	int data;
	struct LNode *next;
 }LNode;
```
### 双链表
```c
typedef struct DLNode
{
	int data;
	struct DLNode *prior;
	struct DLNode *next;
 }DLNode;
```