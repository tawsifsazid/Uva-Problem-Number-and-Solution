#include<bits/stdc++.h>

using namespace std;

int i,j,k,res,ct,cases,n,m,c[100],b,benefit;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        benefit = 0;
        for(i=1;i<=m;i++){
            res = 0;
            scanf("%d",&b);
            for(j=1;j<=n;j++){
                scanf("%d",&c[j]);
                if(j!=1)res = res + c[j];
            }
            if(res < b){
                if((b-res)>=1 && (b-res)<10){
                    if(c[1]>1) benefit = benefit + 1;
                }
                else if((b-res)>=10 && (b-res)<100){
                    if(c[1]>10) benefit = benefit + 10;
                    else{
                        benefit = benefit + 10 - c[1];
                    }
                }
                else if((b-res)>=100 && (b-res)<1000){
                    if(c[1]>100) benefit = benefit + 100;
                    else{
                        benefit = benefit + 100 - c[1];
                    }
                }
                else if((b-res)>=1000 && (b-res)<10000){
                    if(c[1]>1000) benefit = benefit + 1000;
                    else{
                        benefit = benefit + 1000 - c[1];
                    }
                }
                else if((b-res)>=10000){
                    if(c[1]>10000) benefit = benefit + 10000;
                    else{
                        benefit = benefit + 10000 - c[1];
                    }
                }
            }
        }
        printf("%d\n",benefit);
    }

}
