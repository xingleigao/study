#include<cstdio>
const int maxn=1000;
int a[maxn];
int main(){
    int n,x;
    scanf("%d",&n);
    while(n!=0){
        for(int i=0;i<n;++i){
            scanf("%d",&a[i]);
        }
        scanf("%d",&x);
        int count=0;
        for(int i=0;i<n;i++)
            if(a[i]==x) 
                count++;
        printf("%d\n",count);
        scanf("%d",&n);
    }
    return 0;
}