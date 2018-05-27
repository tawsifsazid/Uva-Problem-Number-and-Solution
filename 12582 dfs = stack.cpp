#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases;
char A[10005];
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int year){
   	if( year%4 == 0 && year%100 == !0 )
            return 1;
	else if (year%100 == 0 && year%400 == 0)
            return 1;
	else
        return 0;
}*/
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        ct++;
        int ans[30];
        memset(ans,0,sizeof ans);
        stack<char>S;
        scanf("%s",A);
        int i,j,k,len = strlen(A);
        for(i=0;i<len;i++){
            if(S.empty() || S.top() != A[i]){
                if(S.empty()){

                }
                else{
                    //cout<<S.top()-64<<endl;
                    //printf("%c\n",S.top());
                    ans[S.top()-64] ++;
                    ans[A[i]-64]++;
                }
                S.push(A[i]);

            }
            else if(S.top() == A[i]){
                S.pop();
            }
        }
        printf("Case %d\n",ct);
        for(i=1;i<=26;i++){
            if(ans[i] != 0)printf("%c = %d\n",64+i,ans[i]);
        }
    }
}
