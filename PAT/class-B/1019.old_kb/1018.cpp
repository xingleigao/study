#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string s1,s2;
    bool a[37]={false};
    int i;
    for(int i=0;i<37;++i) a[i]=0;
    int n=0;
    cin>>s1>>s2;
    if(s1.length()<s2.length()) return 0;
    for(i=0;i<s2.length();++i){
        while(s1[i+n]!=s2[i]&&i+n<s1.length()){
            if(s1[i+n]>='0'&&s1[i+n]<='9') if(!a[s1[i+n]-'0']){a[s1[i+n]-'0']=1;printf("%c",s1[i+n]);}
            if(s1[i+n]>='a'&&s1[i+n]<='z') if(!a[s1[i+n]-'a'+10]){a[s1[i+n]-'a'+10]=1;printf("%c",s1[i+n]-'a'+'A');}
            if(s1[i+n]>='A'&&s1[i+n]<='Z') if(!a[s1[i+n]-'A'+10]){a[s1[i+n]-'A'+10]=1;printf("%c",s1[i+n]);}
            if(s1[i+n]=='_')   printf("_");
            ++n;
        }
    }
    while(i+n<s1.length()){
        if(s1[i+n]>='0'&&s1[i+n]<='9') if(!a[s1[i+n]-'0']){a[s1[i+n]-'0']=1;printf("%c",s1[i+n]);}
        if(s1[i+n]>='a'&&s1[i+n]<='z') if(!a[s1[i+n]-'a'+10]){a[s1[i+n]-'a'+10]=1;printf("%c",s1[i+n]-'a'+'A');}
        if(s1[i+n]>='A'&&s1[i+n]<='Z') if(!a[s1[i+n]-'A'+10]){a[s1[i+n]-'A'+10]=1;printf("%c",s1[i+n]);}
        if(s1[i+n]=='_')   if(!a[36]){a[36]=1;printf("_");}
        ++n;
    }
    return 0;
}