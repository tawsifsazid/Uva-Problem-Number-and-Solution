#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int len,i,cases,n,b,j,res,g,res1,res2;
char A[500];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        g=4;
        res=0;
        res1=0;
        res2=0;
        string a,b;
        while(g--){
            cin>>a;
            b=b+a;
        }
        //cout<<b<<endl;
        for(i=0;i<b.length();i=i+2){
            res=(b[i]-48)*2;
            while(res!=0){
               res1=res1+(res%10);
               res=res/10;
            }
        }
        //printf("%d\n",res1);
        for(i=1;i<b.length();i=i+2){
            res2=res2+(b[i]-48);
        }
        //printf("%d\n",res2);
        res1=res1+res2;

        if(res1%10==0)printf("Valid\n");
        else{
            printf("Invalid\n");
        }
    }
}
