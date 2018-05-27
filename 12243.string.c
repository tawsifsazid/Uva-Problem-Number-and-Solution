#include<stdio.h>
#include<string.h>
char str[1000000],ch,ch1;
int i,j,c;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   while(gets(str)){
    if(str[0] == '*')break;
    int len = strlen(str);
    c=1;
    ch = str[0];
    for(i=1;i<len;i++){
         if(str[i]==32){
            if(ch==str[i+1] || (ch+32)==str[i+1] || (ch-32)==str[i+1] ){
                ch=str[i+1];
                c=1;
            }
            else{
                c=0;
                break;
            }
        }
    }
        if(c==1){
        printf("Y\n");
        }
        else{
        printf("N\n");
        }
   }
}
