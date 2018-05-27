#include<stdio.h>
#include<string.h>
#include<math.h>
long long a,b,len,c,flag1,i,j,k,res,flag2,flag3,flag4,flag5,flag6;
char str[22];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%s",str)!=EOF){
        len=strlen(str);
        flag1=0;
        flag2=0;
        flag3=0;
        flag4=0;
        flag5=0;
        flag6=0;
        for(i=0;i<len;i++){
            if((str[i]=='B' || str[i]=='P' || str[i]=='V' || str[i]=='F') &&(flag1!=1)){
               printf("1");
               //printf("dhuk\n");
            flag1=1;
            flag2=0;
            flag3=0;
            flag4=0;
            flag5=0;
            flag6=0;

            }
            if((str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z')&&(flag2!=1)){
                printf("2");
            flag1=0;
            flag2=1;
            flag3=0;
            flag4=0;
            flag5=0;
            flag6=0;
            }
             if((str[i]=='D' || str[i]=='T')&&(flag3!=1)){
                    printf("3");
            flag1=0;
            flag2=0;
            flag3=1;
            flag4=0;
            flag5=0;
            flag6=0;
            }
             if((str[i]=='L')&&(flag4!=1)){
                    printf("4");
            flag1=0;
            flag2=0;
            flag3=0;
            flag4=1;
            flag5=0;
            flag6=0;
            }
             if((str[i]=='M' || str[i]=='N')&&(flag5!=1)){
                    printf("5");
            flag1=0;
            flag2=0;
            flag3=0;
            flag4=0;
            flag5=1;
            flag6=0;
            }
             if((str[i]=='R')&&(flag6!=1)){
               printf("6");
            flag1=0;
            flag2=0;
            flag3=0;
            flag4=0;
            flag5=0;
            flag6=1;
            }
            else if(str[i]!='B' && str[i]!='P' && str[i]!='V' && str[i]!='F' &&str[i]!='R'&&str[i]!='M' && str[i]!='N'&&str[i]!='L'&&str[i]!='D' && str[i]!='T'&&str[i]!='C'&&str[i]!='G'&&str[i]!='J'&&str[i]!='K'&&str[i]!='Q'&&str[i]!='S'&&str[i]!='X'&&str[i]!='Z'){
            flag1=0;
            flag2=0;
            flag3=0;
            flag4=0;
            flag5=0;
            flag6=0;
            //printf("unknown\n");
            }
        }
        printf("\n");
    }
}


