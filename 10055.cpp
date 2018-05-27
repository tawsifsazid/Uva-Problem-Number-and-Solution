#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int main(){
    long long a,b,c,n,res;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        c=a-b;
        res=abs(c);
        printf("%lld\n",res);
    }
}
