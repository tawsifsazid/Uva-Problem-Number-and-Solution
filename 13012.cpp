#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,tea,n,b,j,m,res,g;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&tea)!=EOF){
        res=0;
        for(i=1;i<=5;i++){
            scanf("%d",&m);
            if(m==tea)res++;
        }
        printf("%d\n",res);
    }
}
