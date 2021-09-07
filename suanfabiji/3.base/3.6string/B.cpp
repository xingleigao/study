#include<bits/stdc++.h>

using namespace std;


int main(){
    string str;
    while(getline(cin,str)){
        str[0] = toupper(str[0]);
        for(int i = 1;i< str.size();){
            while(i < str.size()&&(str[i]!=' '&&str[i] != '\t'&&str[i] != '\r'&&str[i] != '\n'))
                i++;
       //cout<<i<<endl;
            while(i < str.size()&&(str[i]==' '||str[i] == '\t'||str[i] == '\r'||str[i] == '\n'))
                i++;
            str[i] = toupper(str[i]);
            //cout<<i<<endl;
        }
        cout<<str<<endl;
    }
}