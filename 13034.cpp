#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,cases,n,b,j,m,res,g,flag,ct=0;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
     scanf("%d",&cases);
     while(cases--){
        flag=1;
        ct++;
        for(i=1;i<=13;i++){
            scanf("%d",&n);
            if(n==0){
                flag=0;
            }
        }
        if(flag==0)printf("Set #%d: No\n",ct);
        else{
            printf("Set #%d: Yes\n",ct);
        }
     }
}
