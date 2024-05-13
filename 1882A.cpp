



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, b;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if(v[0]==1)
        {
           b=2;
        }
        else
        {
            b=1;
        }
        for(int i=1; i<n; i++)
        {
            if(v[i]==b+1)
            {
                b = b+2;
            }
            else
            {
                b = b+1;
            }
        }
        cout<<b<<endl;
    }
}
