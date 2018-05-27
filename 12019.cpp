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

int k,i,cases,n,b,j,res,g,A[13],month,date;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //1=staruday;
A[1]=31;
A[2]=28;
A[3]=31;
A[4]=30;
A[5]=31;
A[6]=30;
A[7]=31;
A[8]=31;
A[9]=30;
A[10]=31;
A[11]=30;
A[12]=31;
    scanf("%d",&cases);
    while(cases--){
        k=0;
        res=0;
        scanf("%d %d",&month,&date);
        for(i=1;i<=12;i++){
              //printf("i== %d and A[i]==%d\n",i,A[i]);
            for(j=1;j<=A[i];j++){
                k++;
                if(k==8)k=1;
                if(i==month && j==date){
                    res=k;
                    //printf("ekhon k== %d\n",k);
                    break;
                }
            }
        }
        if(res==1)printf("Saturday\n");
        if(res==2)printf("Sunday\n");
        if(res==3)printf("Monday\n");
        if(res==4)printf("Tuesday\n");
        if(res==5)printf("Wednesday\n");
        if(res==6)printf("Thursday\n");
        if(res==7)printf("Friday\n");
    }
}
