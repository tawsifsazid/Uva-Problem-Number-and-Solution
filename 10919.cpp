#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int qr,flag,k,m,A[200],i,j,krtehbe,ase,mil,korse,B[200],c,a,b,v;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&k)!=EOF){
        if(k==0)break;
        korse=0;
        flag=0;
        v=0;
        qr=0;
        scanf("%d",&m);
        for(i=1;i<=100;i++){
            A[i]=0;
            B[i]=0;
        }
        for(i=1;i<=k;i++){
            scanf("%d",&a);
            v++;
            A[v]=a;
        }
        c=v;
        v=0;
        while(m--){
            korse=0;
            v=0;
        scanf("%d %d",&ase,&krtehbe);
       //printf("%d %d\n",ase,krtehbe);
            while(ase--){
                scanf("%d",&b);
                v++;
                B[v]=b;
            }
            for(i=1;i<=v;i++){
                for(j=1;j<=c;j++){
                    if(A[j]==B[i]){
                        korse++;
                        //printf("dhukdssese %d %d %d\n",korse,B[i],A[j]);
                    }
                }
            }
            if(korse>=krtehbe){
                flag=0;
            }
            else{
                flag=1;
                qr=1;
                //break;
            }
        }
        if(qr==0)printf("yes\n");
        else{
            printf("no\n");
        }
    }
}
