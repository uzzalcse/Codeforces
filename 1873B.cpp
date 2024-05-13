


#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        v[0]++;
        long long product=1;
        for(int i=0; i<n; i++)
        {
            product = product*v[i];
        }
        cout<<product<<endl;
    }

    return 0;
}
