#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
int flag,qr,cases,data,A[2000000],B[2000000],i,a,mark;
char C[2000000] [500];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        flag=0;
        scanf("%d",&data);
        for(i=1;i<=data;i++){
           scanf("%s %d %d",C[i],&A[i],&B[i]);
           //printf("%s\n",C[i]);
        }
        scanf("%d",&qr);
        while(qr--){
            flag=0;
            scanf("%d",&a);
            for(i=1;i<=data;i++){
                if(a>=A[i] && a<=B[i]){
                    flag++;
                    mark=i;
                    if(flag>1)break;
                    //printf("dhukse\n");
                }
            }
            if(flag==1){
                printf("%s\n",C[mark]);
            }
            else{
                printf("UNDETERMINED\n");
            }
        }
        if(cases)printf("\n");
    }
}
