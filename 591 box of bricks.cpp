#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long res,n,i,j,a,m,cases,ct=0;
long long brick[56];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&cases)!=EOF){
        if(cases==0)break;
        ct++;
        n=cases;
        j=0;
        res=0;
        m=0;
        for(i=0;i<53;i++)brick[i]=0;
            for(i=0;i<n;i++){
                scanf("%lld",&a);
                brick[i]=a;
                //printf("dhukse");
                m=m + brick[i];
            }
            m=m/n;
            //printf("%lld\n",m);
        sort(brick,brick + n);
        for(i=0;i<n;i++){
            if(brick[i]>=m){
                break;
            }
            else{
                res=res + (m - brick[i]);
            }
        }
        printf("Set #%lld\n",ct);
        printf("The minimum number of moves is %lld.\n",res);
        printf("\n");
    }

}
