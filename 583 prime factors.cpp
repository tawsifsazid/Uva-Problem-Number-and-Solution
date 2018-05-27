#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long i,j,k,n,a,flag;
int main(){
      //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    a=sqrt(2147483648);
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        flag=0;
       if(n>0){
            printf("%lld =",n);
            //a=sqrt(n);
        for(i=2;i<=a && i<=n;i++){
                //printf("dhukse");
            while(n%i==0){
                flag=1;
                printf(" %lld",i);
                n=n/i;
                if(i<=n){
                    printf(" x");
                }
            }
        }
        if(n!=1){
            printf(" %lld",n);
        }
        else if(flag==0){
                printf(" %lld\n",n);
        }
        printf("\n");
       }
       else if(n<0){
            n=fabs(n);
            //a=sqrt(n);
            printf("-%lld = -1 x",n);
        for(i=2;i<=a && i<=n;i++){
            while(n%i==0){
                flag=1;
                n=n/i;
                printf(" %lld",i);
                if(i<=n){
                    printf(" x");
                }
            }
        }
        if(n!=1){
            printf(" %lld",n);
        }
        else if(flag==0){
                printf(" %lld\n",n);
        }
        printf("\n");
       }

    }
}

