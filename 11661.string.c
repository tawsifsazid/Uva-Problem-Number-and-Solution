#include<stdio.h>
#include<string.h>
char str[2000000],ch;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int l,i,j,k,v,m,distance,ans,d,z,c;
    while(scanf("%d",&l)!=EOF){
            i=0;
            j=0;
            k=0;
            d=0;
            if(l==0){
                break;
            }
            getchar();
            gets(str);
            c=strlen(str);

            for(v=0;v<=c;v++){
                if(str[v]=='R'){
                    i++;
                    if(i==2 && j==0){
                        i--;
                        k=0;
                        j=0;
                    }
                    else if(i==j){
                        ans= k + 1;
                        if(d>ans || d==0){
                            d=ans;
                            k=0;
                            j=0;
                        }
                        else{
                            j=0;
                            k=0;
                        }
                    }
                }
                 if(str[v]=='D'){
                    j++;
                    if(j==2 && i==0){
                        j--;
                        k=0;
                        i=0;
                    }
                    if(i==j){
                        ans= k + 1;
                        if(d>ans || d==0){
                            d=ans;
                            i=0;
                            k=0;
                        }
                        else{
                            i=0;
                            k=0;
                        }
                    }
                }
                if(str[v]=='.'){
                   if(i==0 && j==0){
                    k=0;
                   }
                   else{
                    k++;
                   }
                }
                if(str[v]=='Z'){
                    d=0;
                    break;
                }
            }
            printf("%d\n",d);

    }
}
