#include<cstdio>
int main(){
    int Galleon, Sickle, Knut,Galleon1, Sickle1, Knut1;
    scanf("%d.%d.%d",&Galleon, &Sickle, &Knut);
    scanf("%d.%d.%d",&Galleon1, &Sickle1, &Knut1);

    int carry = 0;
    carry = (Knut + Knut1) / 29;
    Knut = (Knut + Knut1) % 29;
    int carry1 = 0;
    carry1 = (Sickle + Sickle1 + carry) / 17;
    Sickle = (Sickle + Sickle1 + carry) % 17;
    Galleon = Galleon + Galleon1 + carry1;

    printf("%d.%d.%d\n",Galleon, Sickle, Knut);

    return 0;

}