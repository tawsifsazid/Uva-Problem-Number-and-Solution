#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int a,b,c,ct=0,i,d,cases,j,ase,nai,g,L[2000000],R[2000000],S[2000000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
            ct++;
        for(i=0;i<=1000000;i++){
            L[i]=-1;
            R[i]=-1;
            S[i]=-1;
        }
        scanf("%d %d %d",&a,&b,&c);
        for(i=1;i<=a;i++){
            scanf("%d",&d);
            L[d]=d;
        }
        for(i=1;i<=b;i++){
            scanf("%d",&d);
            R[d]=d;
        }
        for(i=1;i<=c;i++){
            scanf("%d",&d);
            S[d]=d;
        }
        printf("Case #%d:\n",ct);
        ase=0;
        nai=0;
        for(i=0;i<=100000;i++){
            if(L[i]!=-1 && R[i]==-1 && S[i]==-1){
                    ase++;
            }
            else if(L[i]==-1 && R[i]!=-1 && S[i]!=-1){
                nai++;
            }
        }
        printf("%d %d\n",ase,nai);
        ase=0;
        nai=0;

        for(i=0;i<=100000;i++){
            if(R[i]!=-1 && S[i]==-1 && L[i]==-1){
                    ase++;
            }
            else if(R[i]==-1 && L[i]!=-1 && S[i]!=-1){
                nai++;
            }
        }
        printf("%d %d\n",ase,nai);
        ase=0;
        nai=0;
         for(i=0;i<=100000;i++){
            if(S[i]!=-1 && L[i]==-1 && R[i]==-1){
                    ase++;
            }
            else if(S[i]==-1 && L[i]!=-1 && R[i]!=-1){
                nai++;
            }
        }
        printf("%d %d\n",ase,nai);
        ase=0;
        nai=0;
    }
}
