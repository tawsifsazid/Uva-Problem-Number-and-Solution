#include<stdio.h>
#include<string.h>
#include<math.h>
long long  n,a,b,c,i,j,k,em,l,v,rem;
int main(){
     //a=sqrt(50);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   while(scanf("%lld",&n)!=EOF){
        v=n;
        em=0;
        a=sqrt(n);
        c=0;
        l=0;
        for(j=2;j<=a;j++){
            if(n%j==0){
                c=1;
                break;
            }
            else{
                c=0;
            }
        }
        if(c==0){
                //printf("dhuk\n");
           while(v!=0){
            rem=v%10;
            em=em*10 + rem;
            v=v/10;
           }
           k=sqrt(em);
           for(j=2;j<=k;j++){
            if(em%j==0){
                //printf("dhuk\n");
                l=1;
                break;
            }
            else{
                l=0;
            }
           }
           if(l==0 && em!=n){
            printf("%lld is emirp.\n",n);
           }
           else{

            printf("%lld is prime.\n",n);
           }
        }
        else{
            printf("%lld is not prime.\n",n);
        }
   }
}
