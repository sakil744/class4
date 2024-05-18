
#include<iostream>
using namespace std;

int linear_search(int a[],int n,int key)
{
    int i=0;
    while(i<=n)
    {
        if(a[i]==key)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int n,key;

    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)

    {
        cin>>a[i];
    }
    cout<<"Enter key value";
    cin>>key;
    int ans=linear_search(a,n,key);
    if(ans==-1)
    {
    cout<<"not Found";
    }
    else
    {
    cout<<"found";
    }
    return 0;
}
