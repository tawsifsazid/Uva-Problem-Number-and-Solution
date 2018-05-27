#include<stdio.h>
#include<string.h>
#include<math.h>
long long  sum,n,a,b,c,i,j,k,em,l,v,rem;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        sum=0;
        c=1;
        if(n==0)break;
        while(n!=0){
            //printf("%lld\n",n);
            rem=n%10;
            sum=sum+rem;
            n=n/10;
            //printf("%lld\n",sum);
            c=0;
            if(n==0){
                if(sum>=10){
                    //printf("dhuk\n");
                    n=sum;
                    sum=0;
                    //printf("%lld\n",n);
                    //break;
                }
                else{
                    break;
                }
            }
        }
        printf("%lld\n",sum);


    }

}

