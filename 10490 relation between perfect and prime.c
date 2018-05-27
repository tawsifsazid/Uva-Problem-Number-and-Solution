#include<stdio.h>
#include<string.h>
#include<math.h>
long long v,i,j,k,a,b,c,d,n,res,prime,z;
int main(){

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
            if(n==0)break;
           c=0;
           v=0;
           z=0;
        res=pow(2,n-1)*(pow(2,n)-1);
        prime=(pow(2,n)-1);
        //printf("%lld %lld\n",res,prime);
        z=sqrt(n);
        for(i=2;i<=z;i++){
            if(n%i==0){
                c=1;
                //printf("dhukse");
                break;
            }
            if(n%i!=0){
                c=0;
            }
        }
        z=sqrt(prime);
        for(i=2;i<=z;i++){
            if(prime%i==0){
                v=1;
                //printf("dhukse");
                break;
            }
            if(prime%i!=0){
                v=0;
            }
        }
        if(c==0 && (res%10==8 || res%10==6) && v==0){
            printf("Perfect: %lld!\n",res);
        }
        if(c==0 && (res%10!=8 || res%10!=6) && v==1){
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
        if(c==1 && v==1){
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }
}
