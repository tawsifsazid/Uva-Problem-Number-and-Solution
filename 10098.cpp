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
    scanf("%d",&cases);
    char A[1000000];
    while(cases--){
        scanf("%s",A);
        b=strlen(A);
        //printf("%d\n",b);
        sort(A,A+b);
        do{
            printf("%s\n",A);
        }while(next_permutation(A,A+b));
        printf("\n");
    }
}
