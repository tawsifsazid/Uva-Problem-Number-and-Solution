#include<stdio.h>
#include<string.h>
char ch;
long long a,b,c=-1,i;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%c",&ch)!=EOF){
            //printf("dhukse");
            if(ch==10){
                printf("\n");
            }
            if(ch==32)printf(" ");
        //printf("%c",str[0]);
            if(ch=='"'){
                 c++;
              if(ch=='"' && c%2==0){
                printf("``");
                //printf("dhuk1\n");
              }
              if(ch=='"' && c%2!=0 ){
                printf("''");
                //printf("dhuk2\n");
              }
            }
              if(ch!='"' && ch!=10 && ch!=32){
                printf("%c",ch);
              }
    }
    //printf("\n");
}
