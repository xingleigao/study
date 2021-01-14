/*
分析：
采用字符串数据进行星期的保存，字符串取相应的字符串，同时注意拿到想要的数据后立即退出循环，防止数据的干扰。
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1,s2,s3,s4;
  int count=0;
  cin>>s1>>s2>>s3>>s4;
  string WeekName[7]={"MON", "TUE", "WED", "THU" , "FRI", "SAT", "SUN"};
  int length1=s1.length()>s2.length()?s2.length():s1.length();
  for(int i=0;i<length1;i++){
    if(s1[i]==s2[i]&&(s1[i]>='A'&&s1[i]<='G')&&count==0){
      cout<<WeekName[s1[i]-'A']<<" "; 
      count=1;
      ++i;
    }
    if(s1[i]==s2[i]&&count==1){
    if(s1[i]>='0'&&s1[i]<='9'){
      cout<<"0"<<s1[i]-'0'<<":";
      break;
    }
    if(s1[i]>='A'&&s1[i]<='N'){
      cout<<s1[i]-'A'+10<<":";
      break;
    }
    }

  }
  int length2=s3.length()>s4.length()?s4.length():s3.length();
    for(int i=0;i<length2;i++)
    if(s3[i]==s4[i]&&((s3[i]>='a'&&s3[i]<='z')||(s3[i]>='A'&&s3[i]<='Z'))){
       if(i<10) {cout<<"0"<<i<<endl; break;}
        else {cout<<i<<endl;break;}
    }

return 0;
}