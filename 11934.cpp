#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long f,a,b,c,l,d,res,i,j,k;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l)!=EOF){
        if(a==0&&b==0&&c==0&&d==0&&l==0)break;
        res=0;
        f=0;
        for(i=0;i<=l;i++){
            f=(a*(i*i))+(b*i)+c;

            //printf("%lld\n",fmod(f));
            if((f%d)==0){
                res++;
            }
        }
        printf("%lld\n",res);
    }

}
