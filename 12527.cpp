#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long n,m,res,A[6000],j,i,k,l,b,flag;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld %lld",&n,&m)!=EOF){
        res=0;
        for(i=1;i<=5500;i++)A[i]=0;
        for(i=n;i<=m;i++){
            b=i;
            k=0;
            flag=1;
            //printf()
            while(b!=0){
                k++;
                A[k]=b%10;
                b=b/10;
            }
                for(j=1;j<=k;j++){
                    for(l=j+1;l<=k;l++){
                        if(A[j]==A[l]){
                            flag=0;
                            break;
                        }
                    }
                    if(flag==0)break;
                }
                if(flag==1)res=res+1;
        }
        printf("%lld\n",res);
    }
}
