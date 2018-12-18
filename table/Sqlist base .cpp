//插入数据元素的算法
int insertElem(Sqlist &L,int p,int e)//L本身发生变化 使用引用型 
{
	int i;
	if(p<0||p>L.length||L.length==maxSize)
		return 0;
	for(i=L.length-1;i>=p;--i)
		L.data[i+1]=L.data[i];
	L.data[p]=e;
	++(L.length);
	return 1; 
 } 
 //删除数据元素的算法
 int deleteElem(Sqlist &L,int p,int &e)
 {
 	int i;
 	if(p<0||p>L.length-1)
 		return 0;
 	for(i=p;p<L.length-1;++i)
 		L.data[i]=L.data[i+1];
	--(L.length);
	return 1; 
   } 
//初始化顺序表的算法
int initElem(Sqlist &L)
{
	L.length=0;
 } 
