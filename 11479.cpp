#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long a,b,c,ct=0,cases,f;
int main(){
    scanf("%lld",&cases);
    while(cases--){
        ct++;
        f=1;
        scanf("%lld %lld %lld",&a,&b,&c);
       if(a+b>c && b+c>a && c+a>b){
        if(a==b &&  b==c && c==a){
              f=0;
            printf("Case %lld: Equilateral\n",ct);
        }
         else if((a==b ||  b==c || c==a)&&f==1){
            printf("Case %lld: Isosceles\n",ct);
        }
        else{
            printf("Case %lld: Scalene\n",ct);
        }
       }
       else{
            printf("Case %lld: Invalid\n",ct);
       }
    }
}
