
#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		string s, f; cin>>s>>f;
		int oneins=0, oneinf=0;
		for(int i=0; i<n; i++) {
			if(s[i]==f[i]) continue;
			if(s[i]!=f[i]) {
				if(s[i]=='1') {
					oneins++;
				}
				if(f[i]=='1') {
					oneinf++;
				}
			}
		}
		cout<<max(oneins, oneinf)<<endl;
	}
}
