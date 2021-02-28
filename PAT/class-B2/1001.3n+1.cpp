#include<cstdio>
int kan(int n){
    if(n==1) return 0;
    if(n%2==1) return kan((3*n+1)/2)+1;
    if(n%2==0) return kan(n/2)+1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",kan(n));
    return 0;
}