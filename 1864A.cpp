

#include<bits/stdc++.h>
using namespace std;
int b[10005];
int main()
{
	int t,i,j,n,x,y,now;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>n;
		b[n]=y;
		b[1]=x;
		now=1;
		for(i=n-1;i>=2;i--)
		{
			b[i]=b[i+1]-now;
			now++;
		}
		if(b[2]-b[1]<=b[3]-b[2]) cout<<-1;
		else
		{
			for(i=1;i<=n;i++) cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
