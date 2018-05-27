#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long a,cases,n,b,j,m,res,g,res1,res2,flag;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld %lld",&a,&b)!=EOF){
        res=1;
        res1=0;
        res2=0;
        n=b-a;
        flag=0;
        while(n<a){
            res2=res2+a;
            res1=b+res1;
            n=res1-res2;
            res++;
            flag=1;
        }
        if(flag==1){
        printf("%lld\n",res);
        }
        if(flag==0 && n>=a){
            printf("2\n");
        }
    }

}
