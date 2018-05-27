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

int i,cases,n,b,j,g=0,A[200],V[200],m,a,X[200];
double res;
char B[20],C[20];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        if(g>0)printf("\n");
        for(i=0;i<=100;i++){
                A[i]=0;
                V[i]=0;
                X[i]=0;
        }
        j=0;
        scanf("%d",&m);
        for(i=1;i<=((n*m*(n-1))/2);i++){
            scanf("%d %s %d %s",&a,B,&b,C);
            string h,p;
            if(X[a]==0){
                j++;
                X[j]=a;
            }
            if(X[b]==0){
                j++;
                X[j]=b;
            }
            //printf("X=== %d %d\n",X[0],X[1]);
            h=B;
            p=C;
            if(h=="rock" && p=="scissors"){
                A[a]++;
                V[b]++;
                //printf("dhukse1 A[a] %d V[a] %d A[b] %d V[b] %d\n",A[a],V[a],A[b],V[b]);
            }
            else if(h=="rock" && p=="paper"){
                A[b]++;
                V[a]++;
                //printf("dhukse2 A[a] %d V[b] %d\n",A[b],V[a]);
                //printf("dhukse2 A[a] %d V[a] %d A[b] %d V[b] %d\n",A[a],V[a],A[b],V[b]);
            }
            else if(h=="paper" && p=="scissors"){
                V[a]++;
                A[b]++;
                //printf("dhukse3 A[a] %d V[b] %d\n",A[a],V[b]);
                //printf("dhukse3 A[a] %d V[a] %d A[b] %d V[b] %d\n",A[a],V[a],A[b],V[b]);
            }
            else if(h=="paper" && p=="rock"){
                A[a]++;
                V[b]++;
                //printf("dhukse4 A[a] %d V[b] %d\n",A[a],V[b]);
                //printf("dhukse4 A[a] %d V[a] %d A[b] %d V[b] %d\n",A[a],V[a],A[b],V[b]);
            }
            else if(h=="scissors" && p=="rock"){
                V[a]++;
                A[b]++;
                //printf("dhukse5 A[a] %d V[b] %d\n",A[a],V[b]);
                //printf("dhukse5 A[a] %d V[a] %d A[b] %d V[b] %d\n",A[a],V[a],A[b],V[b]);
            }
            else if(h=="scissors" && p=="paper"){
                A[a]++;
                V[b]++;
                //printf("dhukse6 A[a] %d V[b] %d\n",A[a],V[b]);
                //printf("dhukse6 A[a] %d V[a] %d A[b] %d V[b] %d\n",A[a],V[a],A[b],V[b]);
            }
            else{

            }
        }
        //printf("%d %d %d %d\n",A[X[1]],V[X[1]],A[X[2]],A[X[2]]);
        for(i=1;i<=n;i++){
           if(((double)(A[X[i]]+V[X[i]]))==0){
                printf("-\n");
           }
           else{
            res=((double)A[X[i]])/((double)(A[X[i]]+V[X[i]]));
            printf("%.3lf\n",res);
           }
        }
        g++;
    }
}
