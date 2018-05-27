#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,cases,n,b,j,m,res,g;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char A[5000];
    int B[60000];
    map<int,char>x;
    scanf("%d",&cases);
    while(cases--){
        scanf("%s",A);
        b=strlen(A);
        m=0;
        g=0;
        //for(i=0;i<200;i++)B[i]=0;
        for(i=0;i<b;i++){
            if(A[i]>=65 && A[i]<=90){
               B[g]=(A[i]*2);
               g++;
               x[A[i]*2]=A[i];
            }
            else{
                B[g]=(131+(2*(A[i]-97)));
                g++;
                x[(131+(2*(A[i]-97)))]=A[i];
            }
        }
        sort(B,B+g);
        //for(i=0;i<g;i++)printf("%d\n",B[i]);
        do{
            for(i=0;i<g;i++){
                printf("%c",x[B[i]]);
            }
            printf("\n");
        }while(next_permutation(B,B+g));
    }
}
