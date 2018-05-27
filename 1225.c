#include<stdio.h>
#include<string.h>
#include<math.h>
long long  v,cases,sum,n,a,b,c,i,j,k,em,l,rem;
long long str[20];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   scanf("%lld",&cases);
   while(cases--){
        //getchar();
       //printf("%lld\n",cases);
        scanf("%lld",&n);
        //printf("%lld\n",cases);
        for(i=0;i<=9;i++){
            str[i]=0;
        }
       //printf("%lld\n",cases);
        for(i=1;i<=n;i++){
            if(i>=10){
                b=i;
               while(b!=0){
                  a=b%10;
                  str[a]++;
                  //printf("%lld ",str[a]);
                  b=b/10;
               }
            }
            else{
            str[i]++;
            //printf("%lld ",str[i]);
            }
        }
       //printf("%lld\n",cases);
        for(i=0;i<=9;i++){
               if(i==0){
                printf("%lld",str[i]);
               }
               else{
                printf(" %lld",str[i]);
               }
               //printf("\n");
        }
        printf("\n");
        //printf("%lld\n",cases);
   }

}

