#include<stdio.h>
#include<string.h>
#include<math.h>
long long isprime[20000000],a,b,c=1,i,j,k=1,twin[20000000];
int main(){
     //a=sqrt(50);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    for(i=4;i<=20000000;i=i+2){
        isprime[i]=1;
    }
    isprime[k]=2;
    for(i=3;i<=20000000;i=i+2){
        if(isprime[i]==0){
            k++;
            isprime[k]=i;
           //printf("%lld %lld\n",k,isprime[k]);
        }
        for(j=i*i;j<=20000000;j=j+i+i){
            isprime[j]=1;
        }
    }
    for(i=1;i<=20000000;i++){
        if(isprime[i+1]-isprime[i]==2){

            twin[c]=isprime[i];
            //printf("%lld %lld\n",c,isprime[c]);
            c++;
        }
    }
    //for(i=1;i<20000000;i++){
        //printf("dhuk\n");
       // if(isprime[i]!=1 && isprime[i]!=0){
                //("dhuk\n");
            //printf("%lld\n",isprime[i]);
        //}
    //}
    while(scanf("%lld",&b)!=EOF){
        printf("(%lld, %lld)\n",twin[b],twin[b]+2);
    }
}
