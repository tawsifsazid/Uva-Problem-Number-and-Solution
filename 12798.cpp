#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long pl,matches,res,i,j,k,goal,flag;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld %lld",&pl,&matches)!=EOF){
        k=0;
        j=0;
        flag=1;
        res=0;
        for(j=1;j<=pl;j++){
            flag=1;
            for(i=1;i<=matches;i++){
                scanf("%lld",&goal);
                if(goal==0){
                   flag=0;
                }
            }
                if(flag==1){
                    res++;
                }
        }
        printf("%lld\n",res);
    }
}
