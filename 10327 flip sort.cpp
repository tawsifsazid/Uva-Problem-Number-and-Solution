#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long res,i,cases,n,b,j,m,g,c,a;
long long flip[1009];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        for(i=0;i<=1000;i++)flip[i]=0;
        g=0;
        m=n;
        res=0;
        while(n--){
            scanf("%lld",&a);
            flip[g]=a;
            g++;
        }
        for(i=0;i<m;i++){
           for(j=i+1;j<m;j++){
                if(flip[i]>flip[j]){
                    res++;
                }
           }
        }
        printf("Minimum exchange operations : %lld\n",res);
    }
}
