#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int len1;
char A[10009],i;
int main(){
     //for(i=0;i<=10000;i++)A[i]='0';
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%s",A)!=EOF){
        len1=strlen(A);
        for(i=0;i<len1;i++){
            printf("%c",(A[i]-7));
        }
        printf("\n");

    }

}
