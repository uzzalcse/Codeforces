

#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		string row1, row2; cin>>row1>>row2;
		for(int i=0; i<n; i++) {
			if(row1[i]=='G')
				row1[i]='B';
			if(row2[i]=='G')
				row2[i]='B';
		}
		if(row1==row2)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}