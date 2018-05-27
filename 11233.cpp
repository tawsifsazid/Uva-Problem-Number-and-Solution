#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int l,cases,n,a,len,i,flag;
char A[500][500],B[500][500],C[500];
int main(){
     //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&l,&n)!=EOF){
        flag=0;
        for(i=1;i<=l;i++){
            scanf("%s %s",A[i],B[i]);
            //printf("%s %s\n",A[i],B[i]);
        }
        while(n--){
            scanf("%s",C);
            flag=0;
            //printf("dhukse while a\n");
           for(i=1;i<=l;i++){
            if(!strcmp(A[i],C)){
                printf("%s\n",B[i]);
                flag=1;
                //printf("dhukse a\n");
                break;
            }
            if(!strcmp(B[i],C)){
                printf("%s\n",B[i]);
                flag=1;
               // printf("dhukse a\n");
                break;
            }
           }
            if(flag==0){
                len=strlen(C);
                if(C[len-1]=='y' && C[len-2]!='a' && C[len-2]!='e' && C[len-2]!='i' && C[len-2]!='o' && C[len-2]!='u'){
                    for(i=0;i<len-1;i++){
                        printf("%c",C[i]);
                    }
                    printf("ies\n");
                }
                else if(C[len-1]=='o' || C[len-1]=='s' || C[len-1]=='x'){
                     for(i=0;i<len;i++){
                        printf("%c",C[i]);
                    }
                    printf("es\n");
                }
                else if(C[len-1]=='h' && (C[len-2]=='s' || C[len-2]=='c')){
                     for(i=0;i<len;i++){
                        printf("%c",C[i]);
                    }
                    printf("es\n");
                }
                else{
                    for(i=0;i<len;i++){
                        printf("%c",C[i]);
                    }
                    printf("s\n");
                }
            }
        }
    }
}
