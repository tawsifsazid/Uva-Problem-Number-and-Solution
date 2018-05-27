#include<bits/stdc++.h>

using namespace std;

int res,cases,n,r,fl=0,ct=0;
int A[300][300];
map<string,int>M;
void warshall(int n){
   int i,j,k;
   for(k=1;k<=n;k++){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            A[i][j] = max(A[i][j],min(A[i][k],A[k][j]));
            //printf("%d\n",A[i][j]);
        }
    }
   }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    while(cin>>n>>r){
        if(n==0 && r==0)break;
        string a,b;
        ct++;
        memset(A,0,sizeof A);
         int cst,x=0;
         res = 0;
        for(i=0;i<r;i++){
            cin>>a>>b>>cst;
            if(M[a]==0){
                x++;
                M[a]=x;
            }
            if(M[b]==0){
                x++;
                M[b]=x;
            }
           A[M[a]][M[b]]=cst;
           A[M[b]][M[a]]=cst;
        }
        warshall(n);
        cin>>a>>b;
        printf("Scenario #%d\n%d tons\n\n",ct,A[M[a]][M[b]]);
        M.clear();
    }
}
