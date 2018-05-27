#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,j,n,A[10],k,a,res,flag=0,c,res1;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        while(n--){
            c=0;
            k=0;
            res=0;
            res1=0;
            flag=0;
           for(i=1;i<=5;i++)A[i]=0;
           j=5;
           while(j--){
            scanf("%d",&a);
            k++;
            A[k]=a;
           }
           for(i=1;i<=5;i++){
            if(A[i]<=127){
                res++;
                c=i;
                if(res>=2){
                 flag=1;
                 break;
                }
            }
            else if(A[i]>=127 && A[i]<=255){
                res1++;
                if(res1==5){
                    flag=1;
                    break;
                }
            }
           }
           if(flag==1)printf("*\n");
           else{
            if(c==1)printf("A\n");
            if(c==2)printf("B\n");
            if(c==3)printf("C\n");
            if(c==4)printf("D\n");
            if(c==5)printf("E\n");
           }
        }
    }
}
