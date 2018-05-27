#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,cases,n,b,j,res;
char A[2000],B[2000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d\n",&n)!=EOF){
        map<string,string>x;
        //vector<string>m;
          while(n--){
            gets(A);
            gets(B);
            x[A]=B;
          }
          scanf("%d\n",&j);
          while(j--){
            gets(A);
            cout<<x[A]<<endl;
          }
    }
}
