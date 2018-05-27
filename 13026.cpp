#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,cases,n,b,j,g,ct=0;
char D[2000][400],C[400];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        ct++;
        int flag=1;
        int res=0;
        scanf("%d",&b);
        for(i=0;i<b;i++){
            scanf("%s",D[i]);
            //sort(D[i],D[i]+strlen(D[i]));
        }
        scanf("%s",C);
        //sort(C,C+strlen(C));
        printf("Case %d:\n",ct);
      for(j=0;j<b;j++){
            res=0;
            flag=1;
        for(i=0;i<strlen(C);i++){
            if(D[j][i]!=C[i]){
                res++;
                if(res>=2){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1){
            printf("%s\n",D[j]);
        }
      }

    }
}
