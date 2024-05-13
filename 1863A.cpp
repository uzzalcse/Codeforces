




#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        if(n==a)
        {
            cout<<"YES\n";
        }
        else
        {
            int p=0, m=0, temp=a, T=1;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='+')
                {
                    p++;
                    temp++;
                }
                else if(s[i]=='-')
                {
                    m++;
                    temp--;
                }

                //cout<<"Temp value is "<<temp<<endl;

                if(temp==n)
                {
                    cout<<"YES\n";
                    T=0;
                    break;
                }


            }

            if(a+p<n)
            {
                cout<<"NO\n";
            }
            else if(a+p>=n && T)
            {
                cout<<"MAYBE\n";
            }

        }
    }


    return 0;
}
