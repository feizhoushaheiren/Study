#include<bits/stdc++.h>
using namespace std;

long long rem[25][25][25]={0};

int w(long long a,long long b,long long c)
{
    if(a<=0||b<=0||c<=0)
    {
        return 1;
    }else if(a>20||b>20||c>20)
    {
        return w(20,20,20);
    }else if(a<b && b<c)
    {
        if(rem[a][b][c-1]==0)
        {
            rem[a][b][c-1]=w(a,b,c-1);
        }
        if(rem[a][b-1][c-1]==0)
        {
           rem[a][b-1][c-1]=w(a,b-1,c-1);
        }
        if(rem[a][b-1][c]==0)
        {
           rem[a][b-1][c] = w(a,b-1,c);
        }  
        return rem[a][b][c-1]+rem[a][b-1][c-1]-rem[a][b-1][c];
    }else
    {
            if(rem[a-1][b][c]==0)
        {
             rem[a-1][b][c]=w(a-1,b,c);
        }
        if(rem[a-1][b-1][c]==0)
        {
            rem[a-1][b-1][c]=w(a-1,b-1,c);
        }
        if(rem[a-1][b][c-1]==0)
        {
            rem[a-1][b][c-1]=w(a-1,b,c-1);
        }
        if(rem[a-1][b-1][c-1]==0)
        {
            rem[a-1][b-1][c-1]=w(a-1,b-1,c-1);
        }
         return  rem[a-1][b][c]+rem[a-1][b-1][c]+rem[a-1][b][c-1]-rem[a-1][b-1][c-1];
        
    }
}

int main()
{
    while(1)
    {
        long long a=0,b=0,c=0;
        cin>>a>>b>>c;

        
        if(a==-1 && b==-1 && c==-1)
        {
            break;
        }
        cout<<"w("<<a<<b<<c<<")""="<<w(a,b,c)<<endl;        
    }
    return 0;
    
}