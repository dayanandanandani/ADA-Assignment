#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;

        int n = s.length();
        int start = 0;
        int end = n-1;
        while(start<end)
        {
            
        swap(s[start],s[end]);

        start = start+1;
        end = end - 1;
        }
        cout<<s<<endl;
    }

    return 0;
}