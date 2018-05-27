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

int i,cases,n,res,g,a,A[11];
char B[50];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&a)!=EOF){
        //printf("a==%d\n",a);
        if(a==0){
            //printf("dhukse\n");
            break;
        }
        getchar();
        gets(B);
        string b=B;
        if(b=="too low"){
            for(i=a;i>=1;i--){
                A[i]=-1;
                //printf("ekhon %d==%d\n",i,A[i]);
            }
        }
        else if(b=="too high"){
            for(i=a;i<=10;i++){
                A[i]=-1;
                //printf("ekhon %d==%d\n",A[i]);
            }
        }
        else{
                //printf("a==%d\n",A[a]);
            if(A[a]==-1){
                 printf("Stan is dishonest\n");
            }
            else{
                printf("Stan may be honest\n");
            }
             for(i=1;i<=10;i++)A[i]=0;
        }
    }
}
