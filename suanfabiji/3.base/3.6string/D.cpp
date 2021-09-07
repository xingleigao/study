#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    string s,a,b;
    while(getline(cin,s)){
        getline(cin,a);
        getline(cin,b);
        for(int i = 0; i < s.size(); ++i){
            //printf("%d %d\n",s.size(),a.size());
            int j =0;
            while(s[i]==a[j]&&j<a.size()&&i<s.size()){
                i++;
                j++;
            }
            if(j==a.size()){
                i--;
                printf("%s",b.c_str());
            }
            else{
                i -=j;
                putchar(s[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}