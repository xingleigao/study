#include<cstdio>
#include<cstring>
using namespace std;
const int MaxSize=21;
void scan(int *b){
    for(int i=0;i<10;++i)
    scanf("%d",&b[i]);
}
void print(int *b){
    for(int i=0;i<10;++i)
    printf("%d ",b[i]);
    putchar('\n');
}
void produce(int *b){
    int max=b[0],maxi,min=b[0],mini,temp;
    for(int i=0;i<10;++i){
        if(b[i]<min) {min=b[i];mini=i;}
        if(b[i]>max) {max=b[i];maxi=i;}
    }
    if(mini!=0){
        temp=b[0];
        b[0]=b[mini];
        b[mini]=temp;
    }
    if(maxi!=9){
        temp=b[9];
        b[9]=b[maxi];
        b[maxi]=temp;
    }
}
int main(){
    int a[10];
    scan(a);
    produce(a);
    print(a);
    return 0;
} 