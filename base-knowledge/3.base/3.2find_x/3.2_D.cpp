#include<cstdio>
int main(){
    int n,m,temp;
    
    while(scanf("%d",&n)!=EOF){
        int a[n];
        for(int i=0;i<n;++i) scanf("%d",&a[i]);
        scanf("%d",&m);
        for(int i=0;i<m;++i){
            scanf("%d",&temp);
            for(int j=0;j<n;++j){
                if(a[j]==temp){
                    printf("YES\n");
                    break;
                }
                else if(j==n-1) printf("NO\n");
            }
        }
    }
    return 0;
}