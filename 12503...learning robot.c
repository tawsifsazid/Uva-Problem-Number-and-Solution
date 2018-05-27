#include<stdio.h>
#include<string.h>
#include<math.h>
char str[1000000];
int array[1000000];
int main(){
    int l,cases,k,r,i,a,j,len,instruction,b,c;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
          i=0;
          j=0;
          l=0;
          r=0;
       scanf("%d",&instruction);
      for(k=1;k<=instruction;k++){
            scanf("%s",str);
        if(str[0]=='L'){
            i--;
            array[k]=-1;
        }
        if(str[0]=='R'){
            i++;
        array[k]=-2;
        }
        else if(str[0]=='S'){
            scanf("%s %d",str,&a);
            array[k]=a;
            r=array[a];
            while(1){
                r=array[a];
                if(r==-1){
                    i--;
                    break;
                }
                else if(r==-2){
                    i++;
                    break;
                }
                    a=array[a];
            }
      }
    }
        printf("%d\n",i);
    }
}
