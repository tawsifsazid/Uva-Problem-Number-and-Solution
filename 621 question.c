#include<stdio.h>
#include<string.h>

int main(){
    int i,n,len,cases;
    char s[10000];
    scanf("%d",&cases);
    getchar();
    while(cases--){
    //for(i=0;i<n;i++){
        gets(s);
        len=strlen(s);
        if(s[len-2]-48==3 && s[len-1]-48==5)
        printf("-\n");
        else if(s[0]-48==9 && s[len-1]-48==4)
        printf("*\n");
        else if(s[0]-48==1 && s[1]-48==9 && s[2]-48==0 )
        printf("?\n");
        else
        printf("+\n");
        //}
    }

}
