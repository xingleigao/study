#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int m;
    char s[4][21];
    scanf("%d",&m);
    for(int i = 0; i< m ; ++i){
        scanf("%s",s[0]);

        if( i < 3)
            for(int j = 0 ; j <= i ;j++)
                printf("%d=%s ",j+1,s[j]);
        else
            for(int j = 0 ; j <= 3 ;j++)
                printf("%d=%s ",j+1,s[j]);
    
        for(int j = 3; j>= 1; j--)
            strcpy(s[j],s[j-1]);
        printf("\n");

    }
    return 0;
}