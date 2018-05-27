#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int cases,n,k,x,res,res1,ct=0,i;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d %d",&n,&k,&x);
        ct++;
        res1=0;
        res=(n*(n+1))/2;
        int f=0;
        while(1){
            f++;
            res1=res1+x;
            x++;
            if(f==k)break;
        }
        printf("Case %d: %d\n",ct,res-res1);
    }
}
