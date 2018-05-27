#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long b,a,itt,n,res1,cases,c,rem,res,flag;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
        res=0;
        res1=0;
        c=0;
        itt=0;
        flag=1;
        scanf("%lld",&n);
        while(1){
            res1=0;
            a=n;
            while(a!=0){
                rem=a%10;
                res1=res1*10 + rem;
                a=a/10;
            }
            if(res1==n){
                break;
            }
            else{
                flag=0;
                itt++;
                n=res1 + n;
            }
        }

       if(flag==0) printf("%lld %lld\n",itt,n);
       else{
            printf("1 %lld\n",n);
       }
    }
}
