#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long i,j,k,n,h,a,b,c,ans;

    while(scanf("%lld",&n)!=EOF){
           ans=11;
        if(n<0)break;
        if(n==0)printf("1\n");
        if(n==1)printf("2\n");
        if(n==2)printf("4\n");
        if(n==3)printf("7\n");
        if(n==4)printf("11\n");
       else if(n>4){ for(i=5;i<=n;i++){
                ans=ans+i;
                }
                printf("%lld\n",ans);
       }
    }

}
