#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 256;
//判断是否为回文串
bool judge(char str[]){
    int len = strlen(str);
    for(int i = 0; i < (len)/2; ++i)
        if(str[i] != str[len - 1 -i])
            return false;
    return true;
}

int main(){
    char str[maxn];
    while(cin.getline(str,maxn)){
        bool flag = judge(str);
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}