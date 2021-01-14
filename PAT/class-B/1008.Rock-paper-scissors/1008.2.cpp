/*
对比思路：
 直接模拟解决, 可能是想考察编程的基本功吧. 按照字典序, B-C-j来做的话, 代码可以更加精简一点. 下面是可以AC的代码:
*/
#include<iostream>
#include <algorithm>
using namespace std;
int comp(char a,char b){
  if(a==b)return 0;
    if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C')) return 1;
    return -1;
}
int mapping(char c){
    if(c=='B') return 0;
    if(c=='C') return 1;
    return 2;
}
char maxChar(int chArray[3]){
    int maxV=*max_element(chArray,chArray+3);
    if(chArray[0]==maxV) return 'B';
    if(chArray[1]==maxV) return 'C';
    return 'J';
}

int main(){
    int n,cnt1[3]={0},cnt2[3]={0},win=0,lose=0;
    char a,b;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a>>b;
        int ret=comp(a,b);
        if(ret==1){
            ++win;
            ++cnt1[mapping(a)];
        }
        else if(ret==-1){
            ++lose;
            cnt2[mapping(b)];
        }
    }
    cout<<win<<' '<<n-win-lose<<' '<<lose<<endl;
    cout<<lose<<' '<<n-win-lose<<' '<<win<<endl;
    cout<<maxChar(cnt1)<<' '<<maxChar(cnt2)<<endl;
    return 0;
}