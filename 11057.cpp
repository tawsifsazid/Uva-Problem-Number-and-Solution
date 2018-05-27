#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long diff,k,i,flag,flag1,n,books,res1,res2,A[10009],mil,j;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        for(i=0;i<=10000;i++)A[i]=0;
        k=0;
        flag=0;
        diff=0;
        res1=0;
        res2=0;
        while(n--){
            k++;
            scanf("%lld",&A[k]);
        }
        scanf("%lld",&mil);
        sort (A ,A + k + 1);
        //for(i=1;i<=k;i++)printf("%lld\n",A[i]);
        for(i=1;i<=k;i++){
            if(i+1<=k){
                for(j=i+1;j<=k;j++){
                    if(A[i]+A[j]==mil){
                        if(A[j]-A[i]<diff || flag==0){
                            diff=A[j]-A[i];
                            flag=1;
                            res1=A[i];
                            res2=A[j];
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n",res1,res2);
        printf("\n");
    }
}
