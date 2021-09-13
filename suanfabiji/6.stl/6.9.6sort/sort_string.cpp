#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str[] = {"bbbb", "cc", "aa"};
    sort(str, str + 3);
    for(int i = 0; i < 3; ++i)  printf("%s\n",str[i].c_str());
    return 0;
}
