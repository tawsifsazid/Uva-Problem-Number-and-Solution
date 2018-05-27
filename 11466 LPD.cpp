#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long v,n,res,pre,flag,i,j,k,res1,a;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        if(n<0)n=fabs(n);
        flag=0;
        res=0;
        pre=0;
        res1=0;
        a=sqrt(n);
        k=n;
        for(i=2;i<=a;i++){
            if(n%i!=0){

            }
            else{
                res1++;
            while(n!=1 && n%i==0){
                n=n/i;
                flag=1;
                //printf("%lld\n",n);
            }
            if(flag==1 && n!=1){
                pre=n;
            }
            if(res1>1 && n==1){
                pre=i;
                break;
            }
            if(flag==0){
                pre=0;
            }
         }
            //printf("%lld\n",res1);
        }
            if(pre!=0){
                printf("%lld\n",pre);
            }
            else{
                printf("-1\n");
            }
    }

}

