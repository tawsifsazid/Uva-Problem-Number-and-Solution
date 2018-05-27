#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long a,ans,b,ans1,n,k;
    while(scanf("%lld %lld",&n,&k)!=EOF){
        a=n;
        ans=0;
        ans1=0;
        while(n>=k){
            b=(n%k);
            n=n/k;
            ans1= ans1 + n;
            n= n + b;
            if(n==1 && k==1)break;
        }
        if(n==0){
            printf("0\n");
        }
        else if(n!=0){
                ans = a + ans1;
            printf("%lld\n",ans);
        }
    }
}
