#include <cstdio>
/*int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i) scanf("%d",a[i]);
    int b=setPartition(a[n],n);
    printf("%d",b);
}*/
int setPartition(int a[],int n){                 //主要答题点
    int pivotkey,low=0,low0=0,high=n-1,high0=n-1,flag=1,k=n/2;
    int s0=0,s1=0;
    while(flag){
        pivotkey=a[low];
        while(low<high){
            while(low<high&&a[high]>=pivotkey) high--;
            if(low!=high) a[low]=a[high];
            while(low<high&&a[low]<pivotkey) ++low;
            if(low!=high) a[high]=a[low];
        }
        a[low]=pivotkey;
        if(low==k-1) flag=0;
        else if (low<k-1){
            low0=++low;
            high=high0;
        }
        else{
            high0=--high;
            low=low0;
        }
    }
    for(int i=0;i<k;++i) s0+=a[i];
    for(int i=k;i<n;i++) s1+=a[i];
    return s1-s0;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i) scanf("%d",&a[i]);
    int b=setPartition(a,n);
    printf("%d",b);
}