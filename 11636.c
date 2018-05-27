#include<stdio.h>
#include<string.h>
#include<math.h>
long long cases,i,j,k,sum,res,n,ct=0;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        if(n<0)break;
        ct++;
        k=0;
        sum=1;
        for(i=1;sum<n;i++){
            sum=sum*2;
            k++;
        }
        printf("Case %lld: %lld\n",ct,k);
    }
}

