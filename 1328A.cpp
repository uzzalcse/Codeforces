
#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int a, b; cin>>a>>b;
		if(b>a && a%b!=0)
			cout<<b-a<<endl;
		else
			if(a%b==0)
				cout<<0<<endl;
			else
				cout<<b-(a%b)<<endl;
	}
}