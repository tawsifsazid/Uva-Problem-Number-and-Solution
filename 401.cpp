#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,cases,n,b,j,m,res,g,len,B[200];
char A[900],rev[900],ch[900];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    for(i=1;i<=200;i++)B[i]=0;
 B['A']='A';
 //printf("%d\n",B['A']);
 B['E']='3';
 B['H']='H';
 B['I']='I';
 B['J']='L';
 B['L']='J';
 B['M']='M';
 B['O']='O';
 B['S']='2';
 B['T']='T';
 B['U']='U';
 B['V']='V';
 B['W']='W';
 B['X']='X';
 B['Y']='Y';
 B['Z']='5';
 B['1']='1';
 B['2']='S';
 B['3']='E';
 B['5']='Z';
 B['8']='8';
    while(gets(A)){
        //getchar();
        int flag1=1,flag2=1;
        len=strlen(A);
        i=0;
        for(j=len-1;j>=0;j--){
            rev[i]=A[j];
            ch[i]=B[A[j]];
            i++;
            //printf("%d\n",ch[i]);
        }
        //printf(rev);
        //printf("\n");
        //printf(ch);
        //printf("\n");
        for(i=0;i<len;i++){
            if(rev[i]==A[i]){

            }
            else{
                flag1=0;
                //printf("eikhane dhukse %d\n",rev[i]);
                break;
            }
        }
        for(i=0;i<len;i++){
            if(ch[i]==A[i]){

            }
            else{
                flag2=0;
                break;
            }
        }
        if(flag1==1 && flag2==1){
            printf("%s -- is a mirrored palindrome.\n",A);
        }
        if(flag1==1 && flag2==0){
            printf("%s -- is a regular palindrome.\n",A);
        }
        if(flag1==0 && flag2==1){
            printf("%s -- is a mirrored string.\n",A);
        }
        if(flag1==0 && flag2==0){
            printf("%s -- is not a palindrome.\n",A);
        }
        if(EOF)printf("\n");
    }
}
