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

int i,cases,n,b,j,res,g,len,flag;
char A[20000000];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %s",&b,&A)!=EOF){
        if(b==0 && strlen(A)==1 && A[0]=='0')break;
        len=strlen(A);
        flag=0;
        string y;
        for(i=0;i<len;i++){
            if((A[i]-48)==b){

            }
            else{
                y=y+A[i];
            }
        }
        //cout<<y<<endl;
         if(y.length()!=0){
                //printf("dhuks");
            for(i=0;i<y.length();i++){
                if(y[i]=='0'){

                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==1){
              for(i=0;i<y.length();i++){
                    cout<<y[i];
              }
              printf("\n");
            }
            else{
                printf("0\n");
            }
         }
        else if(y=="")printf("0\n",0);
    }
}
