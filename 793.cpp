#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,cases,res,notres,comp,A[60000],x,y;
char ch;
int fin(int c){
    if(A[c]==c){
        //printf("YESSSS A[%d]==%d\n",c,A[c]);
        return c;
    }
    else{
        //printf("dhukse fin a\n");
        A[c]=fin(A[c]);
        /*for(i=1;i<=comp;i++){
                    //printf("A[%d]==%d\n",c,A[c]);
                    //printf("asdasdasdasdasdasdasd\n");
        }*/
        return A[c];
    }
}
void unon(int a,int b){
    //printf("dhukse unon A[%d]==%d\n",A[b],b);
    A[fin(b)]=fin(a);
    //printf("dhukse unon A[%d]==%d\n",b,A[b]);
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    getchar();
    while(cases--){
            res=0;
            notres=0;
        scanf("%d",&comp);
        getchar();
        //printf("res== %d,notres= %d\n",res,notres);
        for(i=1;i<=comp;i++){
            A[i]=i;
        }
        while(scanf("%c",&ch)!=EOF){
            if(ch==10){
                //printf("dss\n");
                break;
            }
            scanf("%d %d",&x,&y);
            getchar();
            //printf("x==%d and y==%d\n",x,y);
            //getchar();
            //printf("dgdf");
            if(ch=='c'){
                 //printf("dhukds\n");
                 //printf("%d %d\n",x,y);
                unon(x,y);
            }
            else{
                //printf("A[%d]==%d and A[%d]=%d\n",x,A[x],y,A[y]);
                if(fin(A[x])==fin(A[y])){
                    res++;
                }
                else{
                    notres++;
                }
            }
        }
            printf("%d,%d\n",res,notres);
            if(cases)printf("\n");
    }
}
