#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int i,cases,n,b,j,m,res,s,B[20000],S[20000],x,y,ct=0;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&b,&s)!=EOF){
          ct++;
        if(s==0 && b==0)break;
        for(i=0;i<=10000;i++){
            B[i]=0;
            S[i]=0;
        }
        for(i=0;i<b;i++){
            scanf("%d",&B[i]);
        }
        sort(B,B+i);
        //printf("sort kore hoilo\n");
        //for(i=0;i<b;i++)printf("%d\n",B[i]);
        for(i=0;i<s;i++){
            scanf("%d",&S[i]);
        }
        sort(S,S+i);
        //printf("sort kore hoilo\n");
        //for(i=0;i<s;i++)printf("%d\n",S[i]);
        int diff=0,flag=0,flag2=0;
        for(i=b-1;i>=0;i--){
                diff=0;
                flag=0;
                flag2=0;
            for(j=0;j<s;j++){
                if((abs(B[i]-S[j])<diff || flag==0) && B[i]!=-1 && S[j]!=-1){
                    flag=1;
                    diff=abs(B[i]-S[j]);
                    flag2=1;
                    x=i;
                    y=j;
                }
            }
            if(flag2==1 && B[x]!=-1 && S[y]!=-1){
                //printf("ekhon biye hoilo %d %d\n",B[x],S[y]);
                B[x]=-1;
                S[y]=-1;
            }
        }
        int lowest;
        res=0;
        flag=0;
        for(i=0;i<b;i++){
            if(B[i]!=-1){
              res++;
              if(lowest>B[i] || flag==0){
                flag=1;
                lowest=B[i];
              }
            }
        }
        if(flag==1){
            printf("Case %d: %d %d\n",ct,res,lowest);
        }
        else{
            printf("Case %d: 0\n",ct);
        }
    }
}
