#include<iostream>
#include<cstring>
using namespace std;
int a[1000];
int dfs(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(a[n]!= -1)
    {
        return a[n];
    }
    int temp=1;
    for(int i=1;i<=n/2;i++)
    {
        temp+=dfs(i);
    }
    return a[n]=temp;
}
int main(void)
{
    int n=0;
    cin>>n;
    memset(a,-1,sizeof(a));
    cout<<dfs(n);
    return 0;
}