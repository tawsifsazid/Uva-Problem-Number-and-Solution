#include<stdio.h>
#include<string.h>
#include<math.h>
char str[6000000];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int flag,a,i,j,k,ct;
    ct=0;

    while(scanf("%s",str)!=EOF){
            k=0;
            ct++;
        if(str[0]=='#')break;
        if(str[0]=='H' && str[1]=='O' && str[2]=='L' && str[3]=='A'){
            printf("Case %d: SPANISH\n",ct);
            k=1;
        }
        if(str[0]=='H' && str[1]=='E' && str[2]=='L' && str[3]=='L' && str[4]=='O'){
            printf("Case %d: ENGLISH\n",ct);
            k=1;
        }
        if(str[0]=='H' && str[1]=='A' && str[2]=='L' && str[3]=='L' && str[4]=='O'){
            printf("Case %d: GERMAN\n",ct);
            k=1;
        }
        if(str[0]=='C' && str[1]=='I' && str[2]=='A' && str[3]=='O'){
            printf("Case %d: ITALIAN\n",ct);
            k=1;
        }
        if(str[0]=='B' && str[1]=='O' && str[2]=='N' && str[3]=='J' && str[4]=='O'&& str[5]=='U' && str[6]=='R'){
            printf("Case %d: FRENCH\n",ct);
            k=1;
        }
        if(str[0]=='Z' && str[1]=='D' && str[2]=='R' && str[3]=='A' &&str[4]=='V'&& str[5]=='S'&& str[6]=='T'&& str[7]=='V' && str[8]=='U'&&str[9]=='J'&&str[10]=='T' &&str[11]=='E'){
            printf("Case %d: RUSSIAN\n",ct);
            k=1;
        }
        else if(k==0){
            printf("Case %d: UNKNOWN\n",ct);
        }
    }
}
