#include<cstdio>
int how(int a){
    a=(a+1)/2;
    for(int i=0;i<a+2;i++) if((i*i)>a) return i-1;
    return 0;
}
int main(){
    int h;
    char s;
    scanf("%d %c",&h,&s);
        int n=how(h);
        //printf("%d",n);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++) printf(" ");
            for(int j=0;j<2*(n-i)-1;j++) printf("%c",s);
            printf("\n");
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i-1;j++) printf(" ");
            for(int j=0;j<2*i+1;j++) printf("%c",s);
            printf("\n");
        }
        printf("%d\n",h-2*n*n+1);
    return 0;
}