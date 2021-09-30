#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int max, min;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    int location = 0;
    for(int i=0;i<n;i++)
    {   
        if(a[i]>max)
        {
            max=a[i];
            location = i+1;
        }
    }
    min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    cout<<max<<" "<<min<<endl;
    cout<<location;
    return 0;
}
