
#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n; 
		string s; cin>>s;
		int p=0, m=0; 
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='+')
				p++;
			else
				m++;
		}
		cout<<abs(p-m)<<endl;
	}
}