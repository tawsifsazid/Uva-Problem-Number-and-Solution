#include<stdio.h>

long long a,c,n,b[10005],res,rem,i,j,big;
int main(){
  while(scanf("%lld",&n)!=EOF){
    if(n==0)break;
    a=n;
    i=0;
    c=0;
    res=0;
    big=0;
    for(j=0;j<10000;j++)b[j]=0;
    while(a!=0){
        rem=a%2;
        i++;
        c++;
        b[i]=rem;
        a=a/2;
    }
    for(i=1;i<=c;i++){
        if(b[i]==1){
            res++;
        }
    }
     printf("The parity of ");
    for(i=c;i>=1;i--){
        printf("%lld",b[i]);
    }
    printf(" is %lld (mod 2).\n",res);
  }
}
