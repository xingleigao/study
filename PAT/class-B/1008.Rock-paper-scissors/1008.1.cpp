/*
分析：
使用两个char读入甲乙的手势，直接使用switch-case来判断。
*/
#include<iostream>
using namespace std;
int main(){
  int n,a[6]={0},b[6]={0};//a,b为甲乙输赢统计 0-2为赢平输 3-5为c j b的赢次数
  char A,B;//甲乙的手势
  cin>>n;
  for(int i=0;i<n;++i){
    cin>>A>>B;
    if(A=='C')
    switch(B){
      case 'C':
      ++a[1];++b[1];
      break;
      case 'J':
      ++a[0];++b[2];++a[3];
      break;
      case 'B':
      ++a[2];++b[0];++b[5];
    }
    if(A=='J')
    switch(B){
      case 'C':
      ++a[2];++b[0];++b[3];
      break;
      case 'J':
      ++a[1];++b[1];
      break;
      case 'B':
      ++a[0];++b[2];++a[4];
    }

    if(A=='B')
    switch(B){
      case 'C':
      ++a[0];++b[2];++a[5];
      break;
      case 'J':
      ++a[2];++b[0];++b[4];
      break;
      case 'B':
      ++a[1];++b[1];
    }
  }
  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
  cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
  if(a[5]>=a[3]) {
   if(a[5]>=a[4]) cout<<"B"<<" ";
    else cout<<"J"<<" ";
  }
  else if(a[3]>=a[4]) cout<<"C"<<" ";
  else cout<<"J"<<" ";
  if(b[5]>=b[3]) {
   if(b[5]>=b[4]) cout<<"B"<<endl;
    else cout<<"J"<<endl;
  }
  else if(b[3]>=b[4]) cout<<"C"<<endl;
  else cout<<"J"<<endl;
  return 0;
}