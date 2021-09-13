#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	char a[210];
	while(cin.getline(a,210)){
	sort(a,a+strlen(a));
	puts(a);	
	}
	return 0;
}
