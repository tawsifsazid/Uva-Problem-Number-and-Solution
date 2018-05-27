#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

long long men,i,j,k,res,ct=0,cases,n,m,cake[2000],drink[2000],A[2000],x,y,x1;
vector<long long>hagu;
void init(){
    for(i=0;i<=1200;i++){
        cake[i]=0;
        drink[i]=0;
        A[i]=0;
        hagu.clear();
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
        init();
        ct++;
        scanf("%lld %lld %lld",&n,&m,&k);
        x=0;
        y=0;
        for(i=1;i<=n;i++){
            scanf("%lld",&men);
            A[i]=men;
            if(i<=m){
                x++;
                cake[x]=men;
            }
            else{
                y++;
                if(y<=k){
                    drink[y]=men;
                }
            }
        }
        double avg=0;
        for(i=1;i<=n;i++){
            avg=avg+A[i];
        }
        i--;
        avg=(avg/i);
        long long res1=0,res2=0,small1=2000000000,small2=2000000000;
        double diff1=0,diff2=0;
        long long flag1=0,flag2=0;
        for(i=1;i<=x;i++){
            if(abs(avg-cake[i])<diff1 || flag1==0){
                flag1=1;
                diff1=abs(avg-cake[i]);
                res1=cake[i];
            }
        }
        for(i=1;i<=x;i++){
            if(abs(avg-cake[i])==abs(avg-res1)){
                hagu.push_back(cake[i]);
            }
        }
        sort(hagu.begin(),hagu.end());
        printf("Case #%lld: %lld",ct,hagu[0]);
        hagu.clear();
        for(i=1;i<=y;i++){
            if(abs(avg-drink[i])<=diff2 || flag2==0){
                flag2=1;
                diff2=abs(avg-drink[i]);
                res2=drink[i];
            }
        }
        for(i=1;i<=y;i++){
            if(abs(avg-drink[i])==abs(avg-res2)){
                hagu.push_back(drink[i]);
            }
        }
        sort(hagu.begin(),hagu.end());
        printf(" %lld\n",hagu[0]);
        hagu.clear();
    }
}
