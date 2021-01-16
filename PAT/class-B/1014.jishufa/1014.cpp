#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int len=0;
char op,s[10010],a[10010]={'0'};
int main(){
    op=getchar();
    if(op=='-') printf("-");
    while((op=getchar())!='E')
        if(op!='.'){ 
        a[len++]=op;
    }
    op =getchar();
    int sum=0;
    char c;
    while((c=getchar())!='\n'){
        sum=sum*10+c-'0';
    }
    if(sum==0){
        printf("%c.",a[0]);
        for(int i=0;i<len;++i) printf("%c",a[i]);
    }
    else if(op=='+'){
        for(int i=0;i<sum+1;++i) printf("%c",a[i]);
        if(sum+1<len) printf(".");
        for(int i=sum+1;i<len;++i) printf("%c",a[i]);
    }
    else if(op=='-'){
        printf("0.");
        for(int i=0;i<sum-1;++i) printf("0");
        for(int i=0;i<len;++i) printf("%c",a[i]);
    }
    return 0;

}