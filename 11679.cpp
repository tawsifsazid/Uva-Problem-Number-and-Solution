#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int A[109],flag,bank,n,i,j,k,res,d,c,val,dhk;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&bank,&n)!=EOF){
        if(bank==0 && n==0)break;
        dhk=0;
        for(i=1;i<=100;i++)A[i]=0;
        for(i=1;i<=bank;i++){
            scanf("%d",&res);
            A[i]=res;
        }
        for(i=1;i<=n;i++){
            scanf("%d %d %d",&d,&c,&val);
                A[d]=A[d]-val;
                A[c]=val+A[c];
        }
        //for(i=1;i<=bank;i++)printf("i %d= %d\n",i,A[i]);
        for(i=1;i<=bank;i++){
            if(A[i]<0){
                dhk=1;
                break;
            }
        }
        if(dhk==1)printf("N\n");
        else{
            printf("S\n");
        }
    }
}

