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

 long long m,len,i,j,k,res,ct,cases,n;
 set<long long>v;
 set<long long> :: iterator l;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
   scanf("%lld",&cases);
   while(cases--){
         map<long,long>x;
        res=0;
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=n;i++){
            scanf("%d",&k);
            v.insert(k);
            x[k]++;
        }
        for(i=1;i<=m;i++){
            scanf("%d",&k);
            if(x[k]!=0){
                //cout<<k<<"dhuklo "<<x[k]<<endl;
                x[k]--;
            }
            else{
                //cout<<k<<" "<<x[k]<<endl;
                res++;
            }
        }
        for(l=v.begin();l!=v.end();l++){
            len=*l;
            if(x[len]!=0){
                 //cout<<x[len]<<" "<<x[len]<<endl;
                res=res+x[len];
            }
        }
        printf("%lld\n",res);
   }
}
