#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int n,rem,res;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        res=n;
        if(n==1)printf("1\n");
        else if(n==2)printf("3\n");
        else{
        while(n>=3){
            rem=n%3;
            res=res + n/3;
            n=(n/3) + rem;
        }
        if(3-n==1)res++;
        printf("%d\n",res);
        }
    }
}
