#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

long long i,cases,n,b,j,m,res,g,A[20000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    i=0;
    while(scanf("%lld",&n)!=EOF){
        res=0;
        A[i]=n;
        i++;
        sort(A,A+i);
        //for(j=0;j<i;j++)printf("%lld\n",A[j]);
        if(i%2==0 || i==1){
            if(i==1)printf("%lld\n",A[i-1]);
            else{
                //printf("dhukse %lld\n",A[(i-1)/2]+((A[i/2])));
                res=(A[(i-1)/2]+((A[i/2])))/2;
                printf("%lld\n",res);
            }
        }
        else{
            res=A[i/2];
            printf("%lld\n",res);
        }
    }
}
