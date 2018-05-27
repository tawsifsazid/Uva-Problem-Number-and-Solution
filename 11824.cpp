#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

unsigned long long int k,i,cases,n,b,j,res,g,A[900],res1;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%llu",&cases);
    //printf("%llu\n",cases);
    while(cases--){
        i=0;
        res=0;
        res1=1;
        while(scanf("%llu",&b)!=0){
            if(b==0)break;
            A[i]=b;
            i++;
        }
        k=0;
        //printf("i== %d\n",i);
        sort(A,A+i);
        //for(j=0;j<i;j++)printf("%llu\n",A[j]);
        reverse(A,A+i);
        //for(j=0;j<i;j++)printf("%llu\n",A[j]);
        for(j=0;j<i;j++){
            k++;
            res1=1;
            for(n=1;n<=k;n++){
                res1=A[j]*res1;
                //printf("res1 ==%llu\n",res1);
            }
            res=res+(2*res1);
        }
        //printf("%llu\n",res);
        if(res<=5000000)printf("%llu\n",res);
        else{
            printf("Too expensive\n");
        }
    }
}
