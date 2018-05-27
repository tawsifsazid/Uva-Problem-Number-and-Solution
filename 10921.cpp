#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long len1,i;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    char C[40];
    while(scanf("%s",C)!=EOF){
        len1=strlen(C);
        for(i=0;i<len1;i++){
            if(C[i]=='A' || C[i]=='B' ||C[i]=='C'){
                printf("2");
            }
            if(C[i]=='D' || C[i]=='E' ||C[i]=='F'){
                printf("3");
            }
            if(C[i]=='G' || C[i]=='H' ||C[i]=='I'){
                printf("4");
            }
            if(C[i]=='J' || C[i]=='K' ||C[i]=='L'){
                printf("5");
            }
            if(C[i]=='M' || C[i]=='N' ||C[i]=='O'){
                printf("6");
            }
            if(C[i]=='P' || C[i]=='Q' ||C[i]=='R' || C[i]=='S'){
                printf("7");
            }
            if(C[i]=='T' || C[i]=='U' ||C[i]=='V'){
                printf("8");
            }
            if(C[i]=='W' || C[i]=='X' ||C[i]=='Y' || C[i]=='Z'){
                printf("9");
            }
            if(C[i]=='1'){
                printf("1");
            }
            if(C[i]=='0'){
                printf("0");
            }
            if(C[i]=='-'){
                printf("-");
            }
        }
        printf("\n");
        for(i=0;i<=32;i++)C[i]='0';
    }
}
