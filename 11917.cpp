#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,cases,pare,D,a,ct=0,flag;
char A[50];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        flag=0;
        ct++;
        map<string,int>m;
        vector<string>x;
        scanf("%d",&pare);
        for(i=1;i<=pare;i++){
            scanf("%s %d",A,&a);
            x.push_back(A);
            m[A]=a;
        }
        scanf("%d",&D);
        scanf("%s",A);
        for(i=0;i<x.size();i++){
            if(A==x[i]){
                if(m[x[i]]<=D){
                    flag=1;
                    printf("Case %d: Yesss\n",ct);
                }
                else if(m[x[i]]<=D+5){
                    flag=1;
                    printf("Case %d: Late\n",ct);
                }
                else{
                    flag=1;
                    printf("Case %d: Do your own homework!\n",ct);
                }
            }
        }
        if(flag==0) printf("Case %d: Do your own homework!\n",ct);
    }
}
