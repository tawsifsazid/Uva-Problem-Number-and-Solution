#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int m,i,j,k,res,ct,cases,n,v;
 vector<int>A[1000100];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        //printf("hello");
        for(i=0;i<1000010;i++){
            A[i].clear();
        }
        for(i=0;i<n;i++){
            scanf("%d",&k);
            A[k].push_back(i+1);
        }
        for(i=0;i<m;i++){
            scanf("%d %d",&k,&v);
            if(A[v].size()<k){
                printf("0\n");
            }
            else{
                printf("%d\n",A[v][k-1]);
            }
        }
    }
}
