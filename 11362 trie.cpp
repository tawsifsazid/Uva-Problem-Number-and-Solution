#include<bits/stdc++.h>
#define N 100005
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int a){
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}*/
struct trie{
    int value,prefix;
    int child[10];
    void clear(){
        memset(child , 0 ,sizeof child);
    }
}trie[N];
int ind = 1,fl,flag[N];
void inserttrie(char s[]){
    int len = strlen(s);
    int i,j,k,cur = 0,z = 0;
    for(i=0;i<len;i++){
        int c = s[i] - '0';
        if(trie[cur].child[c] == 0){
            trie[ind].clear();
            if(flag[cur] == 1)fl = 1;
            trie[cur].child[c] = ind;
            ind++;
            z = 1;
        }
            cur = trie[cur].child[c];
    }
    if(z == 0)fl = 1;
    flag[cur] = 1;
}
int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        int n;
        scanf("%d",&n);
        ind = 1;
        fl = 0;
        char b[11];
        memset(flag , 0 ,sizeof flag);
        trie[0].clear();
        for(int i =1;i<=n;i++){
            scanf("%s",b);
            inserttrie(b);
        }
        if(fl == 1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
