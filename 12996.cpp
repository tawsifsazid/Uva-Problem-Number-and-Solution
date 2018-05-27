#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,cases,ct=0,l,n,res,flag,a,b,A[500];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        flag=1;
        res=0;
        ct++;
        scanf("%d %d",&n,&l);
        b=n;
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
            res=res+A[i];
            //printf("re s%d\n",res);
            if(res>l){
                flag=0;
            }
        }
        for(i=0;i<n;i++){
            scanf("%d",&a);
            //printf("A[i]=%d a== %d\n",a,A[i]);
            if(a<A[i]){

                flag=0;
            }
        }
        if(flag==1){
            printf("Case %d: Yes\n",ct);
        }
        else{
            printf("Case %d: No\n",ct);
        }
    }
}
