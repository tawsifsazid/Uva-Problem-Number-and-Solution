#include <bits/stdc++.h>
using namespace std;

#define NODE 505

//complexity:: O(v*e);

int ct=0,cases;
vector<int> adj[NODE];

int vis[NODE], Left[NODE], Right[NODE];

bool tryK ( int s ) {
    //cout<<s<<endl;
    if ( vis[s] == 1 ) return false;
    vis[s] = 1;

    for ( int i = 0; i < adj[s].size(); i++ ) {
        int t = adj[s][i];

        if ( Right[t] == -1 || tryK(Right[t]) ) {
            Left[s] = t;
            Right[t] = s;
            return true;
        }
    }

    return false;
}

int kuhn ( int n ) {
    int res = 0;
    memset(Left,-1,sizeof Left);
    memset(Right,-1,sizeof Right);
    for ( int i = 1; i <= n; i++ ) {
        memset(vis,0,sizeof vis);
        if ( tryK ( i ) ) {
            res++;
        }
    }

    return res;
}

int main () {
    //freopen("input.txt","r",stdin);

    int n, m,A[505][505];
   scanf("%d",&cases);
   while(cases--){
        ct++;
        scanf ( "%d %d", &n, &m );

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%d",&A[i][j]);
                if(A[i][j] == 1){
                    adj[i].push_back(j);
                }
            }
        }

        int maxMatch = kuhn(n);
    //for(int i=1;i<=3;i++)cout<<Left[i]<<endl;
        printf ( "Case %d: a maximum of %d nuts and bolts can be fitted together\n", ct,maxMatch );
        for(int i=0;i<=500;i++){
            adj[i].clear();
        }
   }

    return 0;
}
