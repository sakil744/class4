#include<iostream>
using namespace std;
int main()
{
    int n,key;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter sorted array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Enter searching value: ";
    cin>>key;
    int flag=0;
    int l=0,h=n-1;
    int mid=(l+h)/2;
    while(l<=h)
    {
        if(a[mid]==key)
        {
            flag=1;

            break;
        }
        if(key>a[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    if(flag==1)
        cout<<key<<" Is found at "<<mid<<endl;
    else cout<<key<<" IS not found"<<endl;


}

