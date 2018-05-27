#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long func();
long long cnt,maxx,pre,diff,A[1000010],cases,isprime[2000000],prime[2000000],i,j,k=0,res[1000010],l,a,b;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    func();
    scanf("%lld",&cases);
    while(cases--){
         l=0;
         diff=0;
         pre=0;
         maxx=0;
         cnt=0;
         for(i=1;i<=1000000;i++)res[i]=0;
        scanf("%lld %lld",&a,&b);
        for(i=a;i<=b;i++){
                //printf("dhukse");
            if(isprime[i]!=1 && (i%2!=0||i==2) && i!=1){
                  if(isprime[i]==2){
                    l++;
                    A[l]=i;
                   //printf("%lld\n",A[l]);
                  }
                  else{
                    l++;
                    A[l]=i;
                    //printf("%lld\n",A[l]);
                  }
            }
        }
        if(l<2)printf("No jumping champion\n");
        else{
                for(i=1;i<l;i++){
                    diff=(A[i+1]-A[i]);
                    res[diff]++;
                    //printf("diff %lld\n",diff);
                }
                for(i=1;i<=1000000;i++){
                        //printf("res %lld\n",res[i]);
                        if(res[i]>pre){
                            pre=res[i];
                            maxx=i;
                        //printf("pre %lld\n",pre);
                        }
                }
                for(i=1;i<=1000000;i++){
                    if(res[i]==pre){
                        cnt++;
                        //printf("%lld %lld\n",i,pre);
                        if(cnt>=2)break;
                    }
                }
               if(cnt>=2)printf("No jumping champion\n");
               else{
                printf("The jumping champion is %lld\n",maxx);
               }
        }
    }
}
long long func(){
    prime[1]=2;
      for(i=3;i<=1000500;i++){
        isprime[i]=0;
        prime[i]=0;
      }
    for(i=3;i<=1000500;i=i+2){
        if(isprime[i]==0){
            k++;
            prime[k]=i;
            //printf("%lld\n",prime[k]);
        }
        if(isprime[i]!=1){
            for(j=i*i;j<=1000500;j=j+i){
                isprime[j]=1;
            }
        }
    }
}
