#include<bits/stdc++.h> 

using namespace std;

int main() {

	int t; cin>>t; 
	while(t--) {
		int n; string a, b, c;
		cin>>n;
		cin>>a>>b>>c;
		int check=0;
		for(int i=0; i<n; i++) {
			if(c[i]==a[i] || c[i]==b[i]) {
				check++;
			}
		}
		if(check==n) {
			cout<<"NO\n";
		}
		else {
			cout<<"YES\n";
		}
	}
	
}