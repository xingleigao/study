#include<cstdio>
int main(){
    int n,han_a,hua_a,sum_a=0,han_b,hua_b,sum_b=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d %d",&han_a,&hua_a,&han_b,&hua_b);
        if(hua_a==(han_a+han_b)){
            if(hua_b!=(han_a+han_b)) sum_b++;
        }
        else if(hua_b==(han_a+han_b)) sum_a++;
    }
    printf("%d %d\n",sum_a,sum_b);
    return 0;
}