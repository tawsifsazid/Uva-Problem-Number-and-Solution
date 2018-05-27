#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

long long i,cases,n,j,m,res,g,a,b,c,d,A[9];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        m=(a+b+c+d)/2;
        A[0]=a;
        A[1]=b;
        A[2]=c;
        A[3]=d;
        sort(A,A+4);
        if((a+b+c+d)==(4*a)){
            printf("square\n");
        }
        else if(A[0]==A[1] && A[2]==A[3]){
            printf("rectangle\n");
        }
        else if(a<m && b<m && c<m && d<m){
            printf("quadrangle\n");
        }
        else{
            printf("banana\n");
        }
    }
}
