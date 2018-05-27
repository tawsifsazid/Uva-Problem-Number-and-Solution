#include<stdio.h>
#include<string.h>
#include<math.h>
long long check,a,b,cases,i,j,k,sum,res,n,ct=0,reason,treat;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
  while(scanf("%lld",&n)!=EOF){
    if(n==0)break;
    reason=0;
    treat=0;
    ct++;
    for(i=1;i<=n;i++){
        scanf("%lld",&a);
        if(a>=1 && a<=99){
            reason++;
        }
        else if(a==0){
            treat++;
        }
    }
    res=reason-treat;
    printf("Case %lld: %lld\n",ct,res);
  }
}

