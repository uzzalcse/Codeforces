




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, ans=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); )
        {
            if(s[i]=='B')
            {
                i = i + k;
                ans++;
            }
            else
            {
                i++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
