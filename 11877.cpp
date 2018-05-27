#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long a,b,rem,res,n,flag;
int main(){
         //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);

    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        a=n;
        res=0;
        rem=0;
        flag=1;
        while(a>=3){
            rem=a%3;
            a=a/3;
            res=res + a;
            a=rem + a;
            flag=0;
        }
       if((rem==0 && flag==0 && a==2)|| (rem!=0 && a==2)){
            //printf("dsd");
            printf("%lld\n",res+1);
       }
       if(rem==0 && flag==0 && a<2){
        printf("%lld\n",res);
       }
       if(n==1){
        printf("%lld\n",res);
       }
       if(n==2)printf("1\n");
    }
}
