#include<bits/stdc++.h>

using namespace std;

int res,ct,cases,n,m;
int B[50006];
map<string,int>M;
struct edge{
    int u,v,cost;
}A[50006];
bool compare(edge n1, edge n2){
    return n1.cost < n2.cost;
}
int fnd(int r){
    if(B[r]==r)return r;
    else{
        r = fnd(B[r]);
        return r;
    }
}
int mst(int node){
    int tot = 0,in = 0,i,j;
    for(i=0;i<=node;i++)B[i]=i;
    //printf("ekhon node = %d and in==%d\n",node,in);
    while(tot != node-1){
        int u = fnd(A[in].u);
        int v = fnd(A[in].v);
        if(u!=v){
            B[u] = v;
            res = res + A[in].cost;
            tot++;
        }
        in++;
    }
    return res;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    cin>>cases;
    while(cases--){
        string a,b;
        int cst,x=0;
        res = 0;
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>a>>b>>cst;
            if(M[a]==0){
                x++;
                M[a]=x;
            }
            if(M[b]==0){
                x++;
                M[b]=x;
            }
           A[i].u = M[a];
           A[i].v = M[b];
           A[i].cost = cst;
        }
        sort(A,A+m,compare);
        //for(i=0;i<m;i++){
        //    printf("%d %d = %d\n",A[i].u,A[i].v,A[i].cost);
        //}
        res = mst(n);
        cout<<res<<endl;
        if(cases)cout<<endl;
        M.clear();
    }
}
