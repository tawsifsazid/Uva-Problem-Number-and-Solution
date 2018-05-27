#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long i,cases,n,b,j,m,res,g,A[10],k,ct=0;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
        scanf("%lld",&n);
        //for(i=1;i<=8;i++)A[i]=0;
        g=sqrt(n);
        k=0;
        ct++;
        for(i=2;i<=g;i++){
            if(n%i==0){
                k++;
                A[k]=i;
                k++;
                A[k]=n/i;
                if(k==4)break;
            }
        }
        printf("Case #%lld:  %lld = %lld * %lld = %lld * %lld\n",ct,n,A[1],A[2],A[3],A[4]);

    }
}
