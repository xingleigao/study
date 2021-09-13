#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int m;
    while(scanf("%d",&m) != EOF){
        int a[m][m];
        for(int i = 0; i < m; ++i)
            for(int j = 0; j < m; ++j)
                scanf("%d",&a[i][j]);
        int b[2*m + 2];

        for(int i = 0; i < m; ++i){     //每行每列加和
            int numi = 0,numj = 0;
            for ( int j = 0; j < m; j++){
                numi += a[i][j];
                numj += a[j][i];
            }
            b[i] = numi;
            b[i+m] = numj;
        }
            int numi =0;
            int numj = 0;
        for(int i = 0; i < m; ++i){     //对角线加和
            numi += a[i][i];
            numj += a[i][m-i-1];
        }
        b[2*m] = numi;
        b[2*m+1] = numj;
        sort(b,b + 2*m + 2);
        for(int i = 2*m + 1; i >= 0; --i) printf("%d ",b[i]);
        puts("");
    }
    return 0;
}