#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct yuebing{
    int kucun;
    float price;
    float danjia;
};
bool con(yuebing a,yuebing b){
    return a.danjia>b.danjia;
}
int main(){
  
    int N,D;
    scanf("%d %d",&N,&D);
    float money=0.0;
    vector<yuebing> arr(N);
    for(int i=0;i<N;++i){
        scanf("%d",&arr[i].kucun);
    }
    for(int i=0;i<N;++i){
        scanf("%f",&arr[i].price);
        arr[i].danjia=arr[i].price/arr[i].kucun;
    }
    sort(arr.begin(),arr.end(),con);
    for(int i=0;i<N&&D>0;++i){
        if(arr[i].kucun<=D){
            D-=arr[i].kucun;
            money+=arr[i].price;
        }
        else{
            money=money+arr[i].danjia*D;
            D=0;
        }
    }
    printf("%.2f",money);
    return 0;
}