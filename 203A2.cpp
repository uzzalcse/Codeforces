

#include<bits/stdc++.h>

using namespace std;


int main() {
	long long t, n, k, pr=1;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		int x;
		int arr[n];
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}
		for(int i=0; i<n; i++) {
			pr=pr*arr[i];
		}

		//cout<<pr<<endl;

		if(2023%pr==0) {
			cout<<"yes\n";

		}
		else {
			cout<<"no\n";
		}

	}
}
