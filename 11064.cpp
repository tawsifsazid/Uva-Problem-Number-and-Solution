#include<bits/stdc++.h>

///Note :: euler phi
///link :: http://blog.forthright48.com/2015/09/euler-totient-or-phi-function.html
///link :: http://blog.forthright48.com/2015/09/euler-phi-extension-and-divisor-sum.html

using namespace std;

long long res,res1,i,j,n,k=1,flag[80000006],A[80000006],sqrtn=sqrt(2147483648);

void sieve(){
    A[k]=2;
    for(i=3;i<=sqrtn;i=i+2){
        if(flag[i]==0){
            k++;
            A[k]=i;
            //printf("%d\n",A[k]);
        }
        if(flag[i]==0){
            for(j=i*i;j<=sqrtn;j=j+i){
                flag[j]=-1;
            }
        }
    }
}
int euler(long long a){
    //printf("%d\n",a);
    long long num=a,p;
    sqrtn=sqrt(a);
    for(i=1;i<=k && A[i]<=sqrtn; i++){
        if(a % A[i] == 0){
             p=0;
             //res1=res1 + (n/A[i]);
            while( a % A[i] == 0 ){
                a=a/A[i];
                p++;
            }
            sqrtn=sqrt(a);
            p++;
            res1=res1*p;
            num=num/A[i];
            num=num*(A[i]-1);
        }
    }
    if(a!=1){
        //res1=res1 + T(n/a);
        num = num / a;
        num = num*(a-1);
        res1=res1*2;
    }
    //printf("euler== %lld\n",num);
    return num;
}
int main(){
    sieve();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        res1=1;
        res=euler(n);
        //printf("%lld %lld\n",res,res1);
        res=n-(res + res1)+1;
        printf("%lld\n",res);
    }
}
