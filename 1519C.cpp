
#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int n; long long s=0;
		cin>>n;
		for(int i=0; i<n; i++) {
			int a; cin>>a; s+=a;
		}
		long long n2=(int) sqrt(s);
		if(s==n2*n2) {
			cout<<"Yes\n";
		}
		else {
			cout<<"No\n";
		}
	}
}
