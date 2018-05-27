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
    char A[250];
    scanf("%d",&cases);
    getchar();
    while(cases--){
        int flag=1;
        stack<char>x;
        gets(A);
        if(A[0]==NULL)printf("Yes\n");
       else{
             b=strlen(A);
        for(i=0;i<b;i++){
            if(A[i]=='(' || A[i]=='['){
                    x.push(A[i]);
            }
            else if(A[i]==')' || A[i]==']'){
                if(x.empty()){
                    flag=0;
                    break;
                }
                else{
                    char ch=x.top();
                    if((ch==40&&A[i]!=41)||(ch==91 && A[i]!=93)){
                        flag=0;
                        break;
                    }
                    else{
                        x.pop();
                    }
                }
            }
        }
        if(flag==0 || !x.empty())printf("No\n");
        else{
            printf("Yes\n");
        }
       }
    }
}
