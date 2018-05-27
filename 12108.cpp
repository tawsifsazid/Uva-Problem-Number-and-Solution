#include <bits/stdc++.h>
#define pii acos(-1)
#define ll long long
#define pare pair<int,int>
#define eps 1e-9

using namespace std;

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
int S[105],A[105],B[105],C[105],n,counter = 0,ct =0;

int awaken(){
    int i,j,k,cn = 0;
    for(i=1 ; i<=n; i++){
        if(C[i] <= A[i]){
            cn++;
            S[i] = 0;
        }
        else S[i] = 1;
    }
    return cn;

}
/*int awaken(int gg){
    int i,j,k,cn = 0;
    for(i=1 ; i<=n; i++){
         //  cout<<i<<" "<<C[i]<<endl;
        if(C[i] <= A[i]){
            cn++;
            S[i] = 0;
            cout<<cn<<endl;
        }
        else S[i] = 1;
    }
    return cn;

}*/
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n == 0)break;
        ct++;
        counter = 1;
        int i,j,k;
        memset(B,0,sizeof B);
        memset(A,0,sizeof A);
        memset(C,0,sizeof C);
        memset(S,0,sizeof S);
        for(i=1;i<=n;i++){
            scanf("%d %d %d",&A[i],&B[i],&C[i]);
        }
        int largest = 1;
        for(i=1;i<=n;i++){
            largest =largest*(A[i]+B[i]);
        }
        //cout<<"largest "<<largest<<endl;
        int fl = 0,ch1;
        for(i=1;i<=largest;i++){
             ch1 = awaken();
             //if(i == 19){
             //   cout<<"hehe"<<endl;
            //    ch1 = awaken(19);
             //}
            if(ch1 == n){
                //cout<<"dhuk"<<endl;
                fl = 1;
                break;
            }
            else{
                    counter++;
                for(j=1;j<=n;j++){
                   if(S[j] == 0){
                        if(C[j] == A[j]){
                            if(n - ch1 > ch1){
                                C[j]++;
                                S[j] =1 ;
                            }
                            else{
                                C[j] = 1;
                            }
                        }
                        else{
                            C[j]++;
                        }
                   }
                   else{
                        if(C[j] == A[j]+ B[j]){
                            C[j]  =1;
                        }
                        else{
                            C[j]++;
                        }
                   }
                    //cout<<i<<" "<<j<<" "<<C[j]<<endl;
                }

            }
        }
        if(fl == 1)printf("Case %d: %d\n",ct,counter);
        else printf("Case %d: -1\n",ct);
    }


}
