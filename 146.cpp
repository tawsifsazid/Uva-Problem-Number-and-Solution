#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,cases,n,b,j,m,res,g,len;
char A[60];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%s",A)!=EOF){
        string h;
        if(A[0]=='#' && strlen(A)==1)break;
        len=strlen(A);
        b=0;
        do{
            b++;
            h=A;
            if(b==2)break;
        }while(next_permutation(A,A+len));
        if(b<2)printf("No Successor\n");
        else{
            cout<<h<<endl;
        }
    }
}
