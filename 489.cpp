#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,j,ct=0,a,countt,len,len1,win,X[600];
char ch,A[500],B[500];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&a)!=EOF){
            getchar();
        if(a==-1)break;
        countt=0;
        win=0;
        for(i=0;i<=300;i++)X[i]=0;
        int flag=0,round=0;
        gets(A);
        len=strlen(A);
        gets(B);
        len1=strlen(B);
        for(i=0;i<len1;i++){
            flag=0;
            for(j=0;j<len;j++){
                if(B[i]==A[j]){
                     A[j]='0';
                     //printf("sad %c\n",B[i]);
                     flag=1;
                     //printf("winnnnnnnnnn\n");
                }
            }
            if(countt==7)break;
            if(flag!=1 && X[B[i]]!=1){
                  countt++;
                  X[B[i]]=1;
                //printf("asdas\n");
                   if(countt==7){
                        //flag=2;
                        break;
                   }
            }
            else{
                flag=0;
            }
        }
        for(i=0;i<len;i++){
            if(A[i]=='0')flag=100;
            else{
                flag=-1;
                break;
            }
        }
        if(flag!=-1){
            printf("Round %d\n",a);
            printf("You win.\n");
        }
        else if(countt==7){
            printf("Round %d\n",a);
            printf("You lose.\n");
        }
        else{
              printf("Round %d\n",a);
            printf("You chickened out.\n");
        }
    }
}
