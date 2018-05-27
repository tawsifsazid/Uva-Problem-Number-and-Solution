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

long long i,j,k,res,ct=0,cases,n,n1,n2,small,ans,flag;
 double d;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        ct++;
        //flag=0;
        d=(3.0+(sqrt(8.0*n)))/2;
        //printf("d==%lf\n",d);
        ans=d;
        //printf("ans==%lld\n",ans);
        if(ans!=d){
            ans++;
        }
        printf("Case %lld: %lld\n",ct,ans);
    }
}
