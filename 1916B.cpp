

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a, b;
		cin>>a>>b;
		if(b%a==0)
			cout<<(b/a)*b<<endl;
		else
		{
			cout<<(b*a)/__gcd(a, b)<<endl;
		}
	}
}