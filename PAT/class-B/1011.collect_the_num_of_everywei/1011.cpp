#include<iostream>
#include<cstring>
using namespace std;
int main(){
int num[10]={0},i,lenb;
char s[1000];
scanf("%s",&s);
lenb=strlen(s);
for(int i=0;i<lenb;++i) num[s[i]-'0']++;
for(int i=0;i<10;++i) if(num[i]!=0) printf("%d:%d\n",i,num[i]);
return 0;

}