#include<stdio.h>
#include<string.h>
#include<math.h>
char str[1000000];
int i,j,k,l,res,len;
char func(char c){
    if((c>='a' && c<='z')|| (c>='A' && c<='Z')){
          return 1;

    }
        return 0;
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(gets(str)){
            res=0;
            len=strlen(str);
        for(i=0;i<len;i++){
            if(func(str[i])){
                res++;
                for(j=i;func(str[j]) && j<len;j++){

                }
                i=j;

            }

        }

        printf("%d\n",res);
    }

}

