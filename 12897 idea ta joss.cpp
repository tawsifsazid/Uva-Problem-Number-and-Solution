#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int len,i,cases,n,b,j,m,res,g,r;
char C[30],A[1000006],ch1,ch2;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%s",A);
        len=strlen(A);
        scanf("%d",&r);
        getchar();
        for(i=0;i<26;i++)C[i]='A'+i;
        while(r--){
            scanf("%c %c",&ch1,&ch2);
            getchar();
            for(i=0;i<26;i++){
                if(C[i]==ch2){
                    C[i]=ch1;
                }
            }
        }
        for(i=0;i<len;i++){
            if(A[i]=='_'){

            }
            else{
                A[i]=C[A[i]-'A'];
            }
        }
        printf("%s\n",A);
    }
}
