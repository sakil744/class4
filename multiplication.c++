#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],b[10][10],ans[10][10],i,j,k,n;
    cout<<"Enter the value : ";
    cin>>n;
    cout<<"Enter elements for mat 1: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter elemnst for mat2: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            ans[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            ans[i][j]=0;
            for(int k=0; k<n; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout<<"answer"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
