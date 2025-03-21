#include <bits/stdc++.h>
using namespace std;
const int N = 2e3+10;
int b[N][N];
int s[N][N];
int n,m;
int main()
{

  cin>>n>>m;
  while(m-->0)
{
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  b[x1][y1]+=1;
  b[x2+1][y1]-=1;
  b[x1][y2+1]-=1;
  b[x2+1][y2+1]+=1;
}

for(int i=1;i<=n;i++)
{
  for(int j=1;j<=n;j++)
  {
    s[i][j]=b[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
    cout<<s[i][j]%2;
 
  }
  cout<<endl;
}
  return 0;
}