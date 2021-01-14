#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  int temp=0,t,a;
  cin>>s>>a;
  t=(temp*10+s[0]-'0')/a;
  temp=(temp*10+s[0]-'0')%a;
  if ((t != 0 && s.length() > 1) ||s.length()==1)
  cout << t; 
  for(int i=1;i<s.length();++i){
    t=(temp*10+s[i]-'0')/a;
    temp=(temp*10+s[i]-'0')%a;
    cout<<t;
  }
  cout<<" "<<temp;
  return 0;
}