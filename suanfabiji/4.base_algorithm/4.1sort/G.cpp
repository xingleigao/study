#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int n;
    while(scanf("%d" ,&n) != EOF&&n != 0){
        int a[n];
        for(int i = 0; i < n; ++i)  scanf("%d", &a[i]);
        sort(a,a +n);
        if(n % 2 == 1)
            printf("%d\n",a[n/2]);
        else
            printf("%d\n",(a[n/2-1]+a[n/2])/2);
    }
    return 0;
}