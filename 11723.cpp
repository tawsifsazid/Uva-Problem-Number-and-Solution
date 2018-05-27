#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;
int r,n,i,j,ct=0,mainres,c,res;
int main(){
    while(scanf("%d %d",&r,&n)!=EOF){
        if(r==0 && n==0)break;
        c=0;
        j=0;
        ct++;
        res=n;
        for(i=1;i<=26;i++){
             if(res>=r){
                c=1;
                break;
            }
            res= res + n;
             j++;
            if(res>=r){
                c=1;
                break;
            }
        }
        if(c==1){
            printf("Case %d: %d\n",ct,j);
        }
        else{
            printf("Case %d: impossible\n",ct);
        }
    }

}
