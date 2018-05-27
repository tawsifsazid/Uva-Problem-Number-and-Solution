#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long a,b,k,cases,res,res1;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
        int i,j;
        scanf("%lld %lld %lld",&a,&b,&k);
        res=0;
        res1=0;
        for(j=a;j<=b;j++){
            if(j%k==0){
                  int v=sqrt(j);
                for(i=1;i<=v;i++){
                    if(j%i==0){
                       if(sqrt(j)==i){
                            res=res+1;
                            res1=res1 + i;
                       }
                       else{
                            res=res+2;
                            res1=res1 + i+(j/i);
                       }
                    }
                }
            }
        }
        printf("%lld %lld\n",res,res1);
    }

}
