#include <bits/stdc++.h>
using namespace std;
const int N = 5e6+10;
int L[N],R[N];
int n,m;
int a[N],s[N],k[N];
int l,r;
int main()
{
  cin>>n>>m;
  for(int i=1;i<=m;i++){
    cin>>l>>r;
    L[i]=l;
    R[i]=r;
    a[l]+=1;
    a[r+1]-=1;
  }

  for(int i=1;i<=m;i++){
    s[i]+=a[i];
    if(s[i]==1){
      k[i]=1;
    }
  }
for(int i=1;i<=m;i++){
  int num=count(k+L[i],k+R[i],1);
  cout<<num<<endl;

}

  
  return 0;
}