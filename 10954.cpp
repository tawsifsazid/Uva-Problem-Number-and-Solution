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

long long i,j,k1,k2,res1,res,ct,cases,n,A[60000];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
         priority_queue<long long>Q;
        res=0;
        res1=0;
        for(i=0;i<n;i++){
            scanf("%lld",&j);
            Q.push(-j);
        }
        while(Q.size()>1){
            k1=Q.top();
            //printf("%lld\n",k1);
            Q.pop();
            k2=Q.top();
             //printf("%lld\n",k2);
            Q.pop();
            //printf("%lld\n",(-1*(k1+k2)));
            res=res+abs(k1)+abs(k2);
            k1=abs(k1)+abs(k2);
            Q.push(-k1);
        }
        printf("%lld\n",res);
    }
}
