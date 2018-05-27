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

int flag,i,j,k,res,ct=0,cases,n,res1;
char ch;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        res=0;
        res1=0;
        flag=0;
        ct++;
        scanf("%d\n",&n);
        for(i=1;i<=n;i++){
            scanf("%c",&ch);
            getchar();
            if(ch=='D' || ch=='L'){
                res1++;
                if(res1==3){
                    flag=1;
                    res++;
                    //printf("ekhon res== %d\n",res);
                    //break;
                }
                else{
                    if(flag==0){
                        res++;
                        // printf("ekhon res== %d\n",res);
                       // printf("1 a dhkulo\n");
                    }
                }
            }
            else{
                if(flag==0){
                    res1=0;
                    res++;
                    // printf("ekhon res== %d\n",res);
                    //printf("2 a dhkulo\n");
                }
            }
        }
        if(flag==0){
            printf("Case %d: Yay! Mighty Rafa persists!\n",ct);
        }
        else{
            printf("Case %d: %d\n",ct,res);
        }
    }
}
