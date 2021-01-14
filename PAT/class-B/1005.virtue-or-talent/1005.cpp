/*
分析:
使用C的输入输出进行分类排序
*/
#include<cstdio>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;
int N,L,H;
typedef struct{
  int id;
  int d;
  int c;
}node;
bool compare(node &a,node &b){
  if(a.d+a.c!=b.d+b.c) return a.d+a.c>b.d+b.c;
  if(a.d!=b.d) return a.d>b.d;
  return a.id<b.id;
};
int main(){
  scanf("%d%d%d",&N,&L,&H);
  int ctn[4]={0};
  node snode[4][N];
  for(int i=0;i<N;++i){
    int id,d,c;
    scanf("%d%d%d",&id,&d,&c);
    if(d<L||c<L)
      continue;
    int j=0;
    if(d>=H&&c>=H) j=0;
    else if(d>=H) j=1;
    else if(d>=c) j=2;
    else j=3;
    snode[j][ctn[j]].id=id;
    snode[j][ctn[j]].d=d;
    snode[j][ctn[j]++].c=c;
  }
  printf("%d\n",ctn[0]+ctn[1]+ctn[2]+ctn[3]);
  for(int i=0;i<=3;i++){
    sort(snode[i],snode[i]+ctn[i],compare);
    for(int j=0;j<ctn[i];++j)
    printf("%d %d %d\n",snode[i][j].id,snode[i][j].d,snode[i][j].c);
  }
  return 0;
}