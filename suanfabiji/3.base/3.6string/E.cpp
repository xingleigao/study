#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    string s;
    char c;
    while(getline(cin,s)){
        scanf("%c",&c);
        getchar();
        for(int i = 0; i < s.size();i++)
            if(s[i] != c)
                putchar(s[i]);
        printf("\n");
    }
    return 0;
}