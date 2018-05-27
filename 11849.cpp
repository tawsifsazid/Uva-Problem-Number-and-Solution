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

long long i,cases,n,b,j,res,g,m;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld %lld",&n,&m)!=EOF){
        if(n==0 && m==0)break;
        //for(i=1;i<=1000000;i++)A[i]=0;
        //j=0;
        set<long long>x;
        map<long long ,long long>f;
        //set<long long> :: iterator k;
        for(i=1;i<=n;i++){
            scanf("%lld",&b);
            f[b]=b;
            //A[b]=b;
        }
        for(i=1;i<=m;i++){
            scanf("%lld",&b);
            if(f[b]==0){

            }
            else{
                x.insert(b);
            }
        }
        long long z=x.size();
        printf("%lld\n",z);
    }
}
