#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int i,cases,b,j,m,res,g;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&m)!=EOF){
            map<string,int>A;
            vector<string>B;
            string x[5];
        if(m==0)break;
        int highest=0,n=0;
       while(m--){
            cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4];
            sort(x,x+5);
            //cout<<x[0]<<x[1]<<x[2]<<x[3]<<x[4];
            string a;
            for(i=0;i<5;i++){
            a=a+x[i];
            }
            n++;
            B.push_back(a);
            A[a]++;
            //printf("%d\n",A[a]);
            if(highest<A[a])highest=A[a];
       }
       int res=0;
        for(i=0;i<n;i++){
            if(A[B[i]]==highest){
                res++;
            }
        }
        printf("%d\n",res);
    }
}
