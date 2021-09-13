#include<cstdio>

int change(int y, int q, int *z){
    int num = 0;
    do{
        z[num++] = y % q;
        y /= q;
    }while(y != 0);
    return num;    
}

bool Judge(int z[], int num){
    for(int i = 0; i < num / 2; ++i)
        if(z[i] != z[num - i - 1])
            return false;
    return true;
}

int main(){
    int K, b;
    while(scanf("%d", &K) != EOF){
        scanf("%d", &b);
        int z[40];
        int num = change(K, b, z);
        Judge(z, num)?puts("Yes"):puts("No");
        for(int i = num - 1; i > 0; --i) printf("%d ",z[i]);
        printf("%d\n",z[0]);
    }
    return 0;
}