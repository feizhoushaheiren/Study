#include <bits/stdc++.h>
using namespace std;
int ans=0;
int n=0;
int temp=0;
int solve(int u){
  int flag=1;
while(u!=0){  
  if(flag==1){
    temp = u%10;
    if(temp==1||(temp%2)!=0){        
      flag=0;
      u=u/10;
    }else{
      return 0;
    } 
  }
  if(flag==0){
    temp = u%10;
    if(temp==0||(temp%2)==0){
      flag=1;
      u=u/10;
    }else{
      return 0;
    }
  }    
}

  return 1;
}

int main()
{
  cin>>n;
  while(n!=0){
    int s=0;
    s=solve(n);
    if(s==1){
      ans++;
    }
    n--;

  }
  cout<<ans;

  return 0;
}