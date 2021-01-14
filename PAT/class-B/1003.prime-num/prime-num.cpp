/*
分析:
保存第M到第N个素数，用i标记输出了多少个，如果当前已经输出的个数为10的倍数，则输出一个空行～
素数的判定使用从2到根号i看余数的方式判定
*/
#include<iostream>
#include<vector>
using namespace std;
bool isprime(int a){
  for(int i=2;i*i<=a;++i)
    if(a%i==0) return false;
  return true;
}
int main(){
  int M,N,count=0;
  cin>>M>>N;
  vector<int> v;
  for(int i=2;count<N;++i){
    if(isprime(i)){
      if(++count>=M) v.push_back(i);
    }
  }
  for(int i=0;i<v.size();++i){
        if (i % 10 != 0) printf(" ");
        printf("%d", v[i]);
        if (i% 10 == 9) printf("\n");
  }
}