#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int h1,h2,m1,m2,res;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)!=EOF){
        if(h1==0 && m1==0 && h2==0 && m2==0)break;
        res=0;
        m1=m2-m1;
        if(m1<0){
            m1=m1+60;
            h2=h2-1;
        }
        h1=h2-h1;
        if(h1<0)h1=h1+24;
        res=res+(h1*60)+m1;
        printf("%d\n",res);
    }
}
