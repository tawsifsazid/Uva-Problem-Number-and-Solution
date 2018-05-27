#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long cases,res1,res2,n,a,c,f,res7,i,rem;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%lld",&n);
        a=n;
        c=n;
        res1=0;
        res2=0;
        f=0;
        res7=0;
        while(c!=0){
            rem=c%10;
            f++;
            //printf("f= %lld,c= %lld\n",f,c);
            c=c/10;
        }
        while(a!=0){
            rem=a%2;
            if(rem!=0){
                res1++;
            }
            a=a/2;
        }
        c=n;
        //printf("%lld\n",c);
        for(i=1;i<=f;i++){
            res7=((c%10)*pow(16,i-1)) +res7;
            //printf("%lld\n",res7);
            c=c/10;
        }
        //printf("%lld\n",res7);
        while(res7!=0){
            rem=res7 % 2;
            if(rem!=0){
                res2++;
            }
            res7=res7/2;
        }
        printf("%lld %lld\n",res1,res2);
    }
}
