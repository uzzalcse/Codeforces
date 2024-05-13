

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=6 || n==9)
        {
            cout<<"NO\n";
        }
        else
        {
            if((1+2+(n-3))==n && (n-3)%3)
            {
                cout<<"YES\n";
                cout<<1<<' '<<2<<' '<<n-3<<endl;
            }
            else
            {
                cout<<"YES\n";
                cout<<1<<' '<<4 <<' '<<n-5<<endl;
            }
        }
    }

    return 0;
}
