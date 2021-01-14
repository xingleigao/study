/*
分析：
利用字符串数出多少个DA,然后用循环进行数字相加即可。但是1010次方的数字用int必然越界，采用longlong进行输出。
*/
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
  string A,B;
  char DA,DB;
  int cnt=0;
  long long sum=0;
  cin>>A>>DA>>B>>DB;
  for(int i=0;i<=A.length();++i){
    if(A[i]==DA) {
      sum+=(DA-'0')*pow(10,cnt);
      ++cnt;
    }
  }
  cnt=0;
  for(int i=0;i<=B.length();++i){
    if(B[i]==DB) {
      sum+=(DB-'0')*pow(10,cnt);
      ++cnt;
    }
  }
  cout<<sum<<endl;
  return 0;
}