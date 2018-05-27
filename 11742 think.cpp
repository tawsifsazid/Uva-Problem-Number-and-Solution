#include<bits/stdc++.h>
#define N 1005
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,m;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int a){
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}*/
int A[25],a[25],b[25],c[25];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n==0 && m==0)break;
        int res = 0,i,j,k;
        for(i=0;i<n;i++){
            A[i] = i;
        }
        int counter=0;
        for(i=0;i<m;i++){
            scanf("%d %d %d",&a[i],&b[i],&c[i]);
        }
        counter = 0;
        int v = 0;
        //printf("%d\n",counter);
        do{
          v = 1;
          for(j=0;j<m;j++){
             //scanf("%d %d %d",&a,&b,&c);
               int posa,posb;
               for(i=0;i<n;i++){
                    if(A[i]==a[j]){
                        posa = i;
                    }
                    else if(A[i]==b[j]){
                        posb = i;
                    }
               }
               if(c[j]<0){
                    if(abs(posa-posb)>=-c[j]){

                    }
                    else{
                        v = 0;
                        break;
                    }
               }
               else{
                    if(abs(posa-posb) <= c[j]){

                    }
                    else{
                        v=0;
                        break;
                    }
               }
          }
          counter = counter + v;
        }while(next_permutation(A,A+n));

        printf("%d\n",counter);
    }

}
