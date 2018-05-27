#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long a,cases,maxx,diff,i,flag,n,j;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
       while(cases--){
            diff=-
            scanf("%lld",&n);
            scanf("%lld",&maxx);
            for(i=1;i<n;i++){
                scanf("%lld",&j);
                if(maxx-j>diff){
                    diff=maxx-j;
                }
                if(j>maxx){
                    maxx=j;
                }
            }
            printf("%d\n",diff);
       }
}
