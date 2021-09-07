#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    string a;
    string b;
    cin>>a;
    for(int i = 0; i < a.size(); ++i)
        a[i] = tolower(a[i]);
    getchar();
    while(getline(cin,b)){
        //cout<<a;
        //cout<<b<<endl;
        for(int i = 0; i< b.size();i++){
            if(b[i] == ' ') continue;
            if(b[i] == a[0]||b[i] == toupper(a[0])){
                int j =1;
                i++;
                for(j = 1 ;j< a.size()&&i<b.size();){
                    if(b[i] == a[j]||b[i] == toupper(a[j])){
                        i++;
                        j++;
                    }
                    else    break;
                }
                if(j != a.size()){
                    //cout<<'1'<<endl;
                    i-=j;
                }
                else{
                    i--;
                    continue;
                }
            }
            putchar(b[i]);
        }
        cout<<endl;
    }
    return 0;
}