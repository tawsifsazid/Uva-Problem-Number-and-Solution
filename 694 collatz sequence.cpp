#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long cases,ct,n,l,res;
long long col(long long x,long long y);
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ct=0;
    while(scanf("%lld %lld",&n,&l)!=EOF){
        if(n<0 && l<0)break;
        res=0;
        ct++;
        col(n,l);
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",ct,n,l,res);
    }
}
long long col(long long a,long long limit){
    if(a==1){
        res++;
        return res;
    }
    else if(a%2==0){
        if(a>limit){
            return res;
        }
        else{
        res++;
        //printf("%lld %lld\n",a/2,res);
        col(a/2,limit);
        }
    }
    else{
        if(a>limit){
            return res;
        }
        else{
            res++;
            //printf("%lld %lld\n",(3*a)+1,res);
            col(((3*a)+1),limit);
        }
    }
}

