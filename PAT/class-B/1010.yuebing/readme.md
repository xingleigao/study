---
1010.月饼（25）
---
>时间限制1000ms 内存限制 32768 KB 代码长度限制 100 KB  判断程序 Standard
## 题目描述
>月饼是中国人在中秋佳节时吃的一种传统食品，不同地区有许多不同风味的月饼。现给定所有种类月饼的库存量、总售价、以及市场的最大需求量，请你计算可以获得的最大收益是多少。
注意：销售时允许取出一部分库存。样例给出的情形是这样的：假如我们有3种月饼，其库存量分别为18、15、10万吨，总售价分别为75、72、45亿元。如果市场的最大需求量只有20万吨，那么我们最大收益策略应该是卖出全部15万吨第2种月饼、以及5万吨第3种月饼，获得 72 + 45/2 = 94.5（亿元）。
## 输入描述
>每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N表示月饼的种类数、以及不超过500（以万吨为单位）的正整数D表示市场最大需求量。随后一行给出N个正数表示每种月饼的库存量（以万吨为单位）；最后一行给出N个正数表示每种月饼的总售价（以亿元为单位）。数字间以空是格分隔。
## 输出描述
>对每组测试用例，在一行中输出最大收益，以亿元为单位并精确到小数点后2位。
## 输入例子
>3 20
18 15 10
75 72 45
## 输出例子
>94.50

### 分析（自己的思考）
对于月饼的选择主要集中在单位售价，先选择单位售价较高的月饼，若未达到所需要的总销售量则依次进行后面的筛选。

### 代码实现（自己的思考）
```c
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
```