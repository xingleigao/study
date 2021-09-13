#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s1[51],s2[51];
        scanf("%s %s",s1,s2);
        int lena = strlen(s1),lenb = strlen(s2);
        if(lena>lenb)
            printf("%s is longer than %s\n",s1,s2);
        else if (lena == lenb)
            printf("%s is equal long to %s\n",s1,s2);
        else
            printf("%s is shorter than %s\n",s1,s2);
    }
    return 0;
}