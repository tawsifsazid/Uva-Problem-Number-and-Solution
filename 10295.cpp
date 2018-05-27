#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int note,word,i,j,k,flag,taka;
char A[30],B[10000];
string a;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&word,&note)!=EOF){
            //printf("sad");
       int res=0;
        map<string,int>m;
        vector<string>x;
        for(i=1;i<=word;i++){
            scanf("%s %d",A,&taka);
            m[A]=taka;
            x.push_back(A);
        }
        for(j=1;j<=note;j++){
             res=0;
            while(cin>>a){
                //cout<<a<<endl;
                if(a=="."){
                    //printf("asd\n");
                    break;
                }
                for(i=0;i<x.size();i++){
                    if(x[i]==a){
                       res=res+m[x[i]];
                    }
                }
            }
            printf("%d\n",res);
        }
    }
}
