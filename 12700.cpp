#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,cases,b1,w1,a,t,sr,sris,ct=0,flag;
char ch;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
         flag=0;
         ct++;
         b1=0;
         w1=0;
         a=0;
         t=0;
        scanf("%d",&sr);
        sris=sr;
        getchar();
        while(sr--){
            scanf("%c",&ch);
            if(ch=='B'){
             b1++;
            }
            if(ch=='W'){
                w1++;
            }
            if(ch=='A'){
                a++;
            }
            if(ch=='T'){
                t++;
            }
        }
        getchar();
        if((b1>0 && w1==0 && t==0 && a==0)||(b1>0 && w1==0 && t==0 && a!=0) ){
            flag=1;
            printf("Case %d: BANGLAWASH\n",ct);
        }
        if((w1>0 && b1==0 && t==0 && a==0)||(w1>0 && b1==0 && t==0 && a!=0)){
            printf("Case %d: WHITEWASH\n",ct);
            flag=1;
        }
        if(a==sris){
            printf("Case %d: ABANDONED\n",ct);
        }
        if(w1==b1 && a!=sris){
            printf("Case %d: DRAW %d %d\n",ct,b1,t);
        }
        if(b1>w1 && flag==0){
            printf("Case %d: BANGLADESH %d - %d\n",ct,b1,w1);
        }
        if(w1>b1 && flag==0){
            printf("Case %d: WWW %d - %d\n",ct,w1,b1);
        }
    }
}
