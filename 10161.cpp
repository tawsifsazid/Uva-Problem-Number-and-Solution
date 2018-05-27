#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define eps 1e-9

using namespace std;

int cases,ct= 0;



int main(){
    int n,x,y,c,r;
    while(scanf("%d",&n)!=EOF){
        if(n == 0)break;
        r = ceil((double)sqrt((double)n));
        cout<<r<<endl;
        c = (r*r) - r + 1;
        x = y = r;
        if(r % 2){
            if(n > c)x = x - (n - c);
            else y = y - (c - n);
        }
        else{
            if(n > c)y = y - (n - c);
            else x = x - (c - n);
        }
        printf("%d %d\n",x,y);

    }
}


