#include<bits/stdc++.h>

using namespace std;
int cases,a,b,i,j,res,len,flag=0;
char A[900000];
int isleap(char S[]){
    int p=0,tmp=0,a=1;
    for(i=0;i<len;i++){
        tmp = (tmp*a) + (S[i]-48);
        a=10;
        tmp =(tmp%4);
        //printf("%d\n",tmp);
    }
    if(tmp==0){
            //printf("asd\n");
            a=1;
            for(i=0;i<len;i++){
                tmp = (S[i]-48) + (tmp*a);
                a=10;
                tmp = (tmp%100);
            }
            if(tmp==0){
                    a=1;
            //printf("dhuks");
            for(i=0;i<len;i++){
                    tmp = (S[i]-48) + (tmp*a);
                        a=10;
                        tmp = (tmp%400);
            }
                if(tmp==0)return 1;
                else{
                    return 0;
                }
            }
            else{
                return 1;
            }
       }

}
int hul(char S[]){
    int p=0,tmp=0,a=1;
    for(i=0;i<len;i++){
        tmp = (tmp*a) + (S[i]-48);
        a=10;
        tmp = (tmp%15);
        //printf("%d\n",tmp);
    }
    if(tmp==0)return 1;
    else{
        return 0;
    }
}
int bul(char S[]){
    int p=0,tmp=0,a=1;
    for(i=0;i<len;i++){
        tmp = (tmp*a) + (S[i]-48);
        a=10;
        tmp = (tmp%55);
        //printf("%d\n",tmp);
    }
    if(tmp==0)return 1;
    else{
        return 0;
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%s",A)!=EOF){
        //printf("%s\n",A);
        if(flag>0){
            printf("\n");
        }
        flag++;
        len=strlen(A);
        int a=isleap(A);
        int h=hul(A);
        int b=bul(A);
        if(a==1){
            printf("This is leap year.\n");
            if(h==1){
                printf("This is huluculu festival year.\n");
            }
            if(b==1){
                printf("This is bulukulu festival year.\n");
            }
        }
        else if( h==1){
            printf("This is huluculu festival year.\n");
        }
        else{
            printf("This is an ordinary year.\n");
        }

    }

}
