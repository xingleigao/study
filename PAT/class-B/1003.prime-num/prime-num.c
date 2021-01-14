/*
不使用vector的C语言实现方法*/
#include<stdio.h>
// #pragma warning(disable:4996)
bool isprime(int a){
  for(int i=2;i*i<=a;++i)
    if(a%i==0) return false;
  return true;
}
int main(){
  int M,N,count=0,ctn=0;;
  scanf("%d %d",&M,&N);
  int v[N-M];
  for(int i=2;count<N;++i){
    if(isprime(i)){
      if(++count>=M) v[ctn++]=i;
    }
  }
  for(int i=0;i<ctn;++i){
        if (i % 10 != 0) printf(" ");
        printf("%d", v[i]);
        if (i% 10 == 9) printf("\n");
  }
}
