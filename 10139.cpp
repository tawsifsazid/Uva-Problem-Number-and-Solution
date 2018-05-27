#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long r,sqr1,sqr2flag,n,isprime[1000005],prime[1000005],i,j,k,r1,r2,m,flag,v,p;
long long  func();
int main(){
    func();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        p=0;
        r1=0;
        r2=0;
        flag=0;
        r=0;
        k=0;
        r1=m;
        r2=n;
        sqr1=sqrt(m);
        if(m==0)flag=1;
        else{
            //printf("%lld\n",prime[1]);
        for(i=1;prime[i]<=sqr1;i++){
                //printf("dhuks");
                r=0;
            if(m%prime[i]==0){
                    //printf("%d",m);
                while(m%prime[i]==0){
                    r++;
                    //printf("%lld sonkhata ase %lld bar %lld\n",prime[i],r,prime[1]);
                    m=m/prime[i];
                    //printf("%d\n",m);
                }
                if(r!=0){
                     v=n;
                     p=0;
                        while(v>0){
                            p=p + v/prime[i];
                            v=v/prime[i];
                        }
                        if(p<r){
                            flag=1;
                            break;
                        }
                    }
                }
        }
                //printf("%d\n",m);
                if(m>1){
                        //printf("dhukse %d k\n",k);
                    v=n;
                    p=0;
                    while(v>0){
                        //printf("dhukse %lld n\n",n);
                        p= p + v/m;
                        v=v/m;
                    }
                    if(p<1){
                        //printf("ashole jayga");
                        flag=1;
                    }
                }
        }
        //printf("%lld\n",r2);
      if(flag==1)printf("%lld does not divide %lld!\n",r1,r2);
      else{
         //printf("%d",r2);
        printf("%lld divides %lld!\n",r1,r2);
      }
    }
  }


long long func(){
    for(i=1;i<=1000000;i++){
        isprime[i]=0;
        prime[i]=0;
    }
      prime[1]=2;
    //printf("%lld\n",prime[1]);
     k=1;
    for(i=3;i<=1000000;i=i+2){
        if(isprime[i]==0){
            k++;
            prime[k]=i;
            //printf("%lld\n",prime[1]);
        }
        if(isprime[i]!=1){
            for(j=i*i;j<=1000000;j=j+i){
                isprime[j]=1;
            }
        }
    }
}

