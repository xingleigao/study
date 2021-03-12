#include<cstdio>
int main(){
    int n,n2;
    char s;
    scanf("%d %c",&n,&s);
    n2=(n+1)/2;
    //printf("%d",n2);
    for(int i=0;i<n2;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n2-1) printf("%c",s);
            else{
                if(j==0||j==n-1) printf("%c",s);
                else printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}