#include<bits/stdc++.h>

using namespace std;

long long rem,cases,g,l,a,b;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){
        scanf("%lld %lld",&g,&l);
        a=g;
        b=l;
        while(g!=0){
            rem=l%g;
            l=g;
            g=rem;
            //printf("%lld\n",g);
        }
        if(l==a){
            printf("%lld %lld\n",a,b);
        }
        else{printf("-1\n");}
    }

}
