#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define eps 1e-9

using namespace std;

ll n;



int main(){


    while(scanf("%lld",&n)!=EOF){
        if(n == -1)break;

        ll a = n,best = 1,fl =0,i;
        ll sq = sqrt(n) + 1;
        for( i=sq;i>=2;i--){
              a = n;
              ll occur = 0;
            while(a % i == 1 ){
                a = a - (1 + ((a-1)/i));
                occur++;
                //cout<<occur<<" "<<i<<endl;
            }
            if(occur == i && a % i == 0){
                best = max(best,i);
                break;
            }
        }
        if(best != 1)printf("%lld coconuts, %lld people and 1 monkey\n",n,best);
        else printf("%lld coconuts, no solution\n",n);
    }


}


