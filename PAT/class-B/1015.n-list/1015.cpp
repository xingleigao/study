#include <cstdio>
using namespace std;
typedef struct node{
    //int Adress;
    int Data;
    int Next;
}node;
int main(){
    int first,n,k,m;
    scanf("%d%d%d",&first,&n,&k);
    node anode[100002];
    for(int i=0;i<n;++i){
        scanf("%d",&m);
        scanf("%d%d",&anode[m].Data,&anode[m].Next);
    } 
    anode[100000].Next=first;
    int i=0,j,rear=100001,temp=100001,l=100000,top=100001;
    //printf("%d\n",n);
    for(n=0;anode[l].Next!=-1;++n) l=anode[l].Next;
    //printf("%d\n",n);
    l=100000;
    while(i<n/k){
            ++i;
            j=1;
            temp=anode[l].Next;
            anode[l].Next=anode[anode[l].Next].Next;
            top=rear;
            anode[top].Next=temp;
            rear=temp;
            //printf("%05d %d %05d\n",top,anode[top].Data,anode[top].Next);
        while(j<k){
            ++j;
            temp=anode[l].Next;
            anode[l].Next=anode[anode[l].Next].Next;
            anode[temp].Next=anode[top].Next;
            anode[top].Next=temp;
        }
    }
    anode[rear].Next=anode[l].Next;
    first=anode[100001].Next;
    for(rear=anode[first].Next;rear>0;first=rear,rear=anode[rear].Next) {
        printf("%05d %d %05d\n",first,anode[first].Data,anode[first].Next);
    }
    printf("%05d %d %d\n",first,anode[first].Data,anode[first].Next);
    return 0;
}