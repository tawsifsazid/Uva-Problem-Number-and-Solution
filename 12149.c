#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long ans,n,a,i;
    while(scanf("%lld",&n)!=EOF){
         ans=0;
        if(n==0)break;
        a=n;

        for(i=a;i>=1;i--){
            ans= ans + i*i;
        }
        printf("%lld\n",ans);
    }
}
