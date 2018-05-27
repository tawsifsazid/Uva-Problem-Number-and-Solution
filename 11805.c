#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,k,passes,diff,l,cases,i,j,p,ct,res,m,z,x;
    ct=0;
    int player[30];
    scanf("%d",&cases);
    while(cases--){
            l=-1;
            ct++;
            scanf("%d %d %d",&n,&k,&passes);
            z=0;
        for(i=1;i<=n;i++){
            player[i]=i;
        }
        for(m=1;m<=k;m++){
            if(player[m]==k){
                diff=k;
                break;
            }
        }
          for(j=k;j<=n;j++){
            if(passes>n){
                while(passes>n){
                    passes=passes-n;
                }
            }
            if(z==1){
                break;
            }
            l++;
            if(l==passes){
                break;
            }
            if(j==n){
                for(j=1;j<=n;j++){
                    l++;
                    if(l==passes){
                        m=j;
                        z=1;
                        break;
                    }

                }
            }
          }
            if(z==1){
                printf("Case %d: %d\n",ct,m);
            }
            else{
                printf("Case %d: %d\n",ct,j);
            }
    }
}
