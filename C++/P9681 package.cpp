#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N =1010; 
int n,m;
int v[N],w[N];
int dp[N][N];

int dfs(int u,int sum){
    if(u>n) return 0;
    if(dp[u][sum]!=-1) return dp[u][sum];
    int ans1=0,ans2=dfs(u+1,sum);
    if(sum+v[u]<=m) ans2=dfs(u+1,sum+v[u])+w[u];
    return dp[u][sum]=max(ans2,ans1);


}

int main(){
    memset(dp,-1,sizeof(dp));
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>v[i]>>w[i];
    }
    cout<<dfs(1,0);

    return 0;
}