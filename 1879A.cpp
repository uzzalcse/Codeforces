




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
        vector<int>s, e;
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin>>x>>y;
            s.push_back(x);
            e.push_back(y);
        }

        int w = s[0];

        for(int i=1; i<n; i++)
        {
            if(s[i]>=w && e[i]>=e[0])
            {
                w = -1;
                break;
            }
        }

        cout<<w<<endl;

    }

    return 0;
}
