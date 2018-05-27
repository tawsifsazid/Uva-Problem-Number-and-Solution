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

int i,j,k,res,ct,cases,n,freq,amp;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
            scanf("%d %d",&amp,&freq);
        for(i=1;i<=freq;i++){
            for(j=1;j<=amp;j++){
                    n=j;
                for(k=1;k<=j;k++){
                    printf("%d",n);
                }
                printf("\n");
            }
            for(j=amp-1;j>=1;j--){
                n=j;
                for(k=1;k<=j;k++){
                    printf("%d",n);
                }
                printf("\n");
            }
            if(i!=freq)printf("\n");
        }
        if(cases)printf("\n");
    }
}
