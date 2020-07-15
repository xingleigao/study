## 例题 
已知一个顺序表L，其中的元素递增有序排列，设计一个算法，插入一个元素x（x为int型）后保证顺序表依然递增有序排列（假设插入总能成功）
```c
int findElem (Sqlist L,int x)
{
	int i;
	for(i=0;i<L.length;++i)
	{
		if(x<L.data[i])
		{
			return i;
		}
	}
	return i;
}
void insertElem(Sqlist &L,int x)//L����Ҫ�����仯 ����Ҫʹ�������� 
{
	int p,i;
	p=findElem(L,x);
	for(i=L.length-1;i>=p;--i) 
		L.data[i+1]=L.data[i];
	L.data[p]=x;
	++(L.length);
}
```