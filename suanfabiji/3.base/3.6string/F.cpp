#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        for(int i =s.size()-1; i >= 0;--i){
            putchar(s[i]);
        }
        printf("\n");
    }
    return 0;
}