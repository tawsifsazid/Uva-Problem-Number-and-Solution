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

int len,i,cases,n,b,j,res,g,m,f,ct=0;
char A[10000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d\n",&cases);
    while(cases--){
        m=0;
        f=0;
        ct++;
        gets(A);
        len=strlen(A);
        for(i=0;i<len;i++){
            if(A[i]=='M'){
                m++;
            }
            else if(A[i]=='F'){
                f++;
            }
            else{

            }
        }
        if((m==1 && f==1)||(m!=f)){
            printf("NO LOOP\n");
        }
        else{
            printf("LOOP\n");
        }
    }
}
