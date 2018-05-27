#include<stdio.h>
#include<string.h>
#include<math.h>
    long long isprime[32770];
    long long array[32770];
    long long m,e,i,j,k,n,a,b;
int main(){
    for(i=2;i<=32770;i++){
        isprime[i]=0;
    }
    for(i=2;i<=32770;i++){
        if(isprime[i]==0){
        isprime[i]=i;
        //printf("%lld\n",isprime[i]);
         if(isprime[i]!=0 && isprime[i]!=1){
            for(j=i*i;j<=32770;j=j+i){
                isprime[j]=1;
                //printf("% lld",j);
            }
           // printf("\n");
        }
      }

    }
   while(scanf("%lld",&n)!=EOF){
    long long c=0;
    if(n==0)break;
    for(i=2;i<=n/2;i++){
        if(isprime[i]==1){

        }
        else{
           b=n-isprime[i];
           //printf("%lld ",b);

           if(isprime[b]!=1){
            c++;
           }
        }
    }
    //printf("\n");
    printf("%lld\n",c);

 }
}
