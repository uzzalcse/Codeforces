
#include<bits/stdc++.h> 

using namespace std;

int main() {
	long long t; cin>>t;
	while(t--) {
		long long n; cin>>n;
		vector<long long> v1;
		vector<long long> v2;
		vector<long long> v3;
		for(int i=0; i<n; i++) {
			long long a, x; cin>>a>>x;
			if(a==1) {
				v1.push_back(x);
			}
			if(a==2) {
				v2.push_back(x);
			}
			if(a==3) {
				v3.push_back(x);
			}
		}
		// cout<<"Vector 1\n";
		// for(int i=0; i<v1.size(); i++) {
		// 	cout<<v1[i]<<" ";
		// }
		// cout<<"\nVector2\n";
		// for(int i=0; i<v2.size(); i++) {
		// 	cout<<v2[i]<<" ";
		// }
		// cout<<"\nVector3\n";
		// for(int i=0; i<v3.size(); i++) {
		// 	cout<<v3[i]<<" ";
		// }
		// cout<<endl;
		int mn=*max_element(v1.begin(), v1.end());
		int mx=*min_element(v2.begin(), v2.end());
		int p=(mx-mn)+1;
		int cnt=0;
		if(mn>mx) {
			cout<<0<<endl;
		}
		else {
			for(int i=0; i<v3.size(); i++) {
				if(v3[i]>=mn && v3[i]<=mx) {
					cnt++;
				}
			}
		cout<<p-cnt<<endl;
		}
		
	}
}
