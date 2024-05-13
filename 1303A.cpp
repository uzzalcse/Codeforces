
#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		string s; cin>>s;
		bool check=false;
		int cnt=0;
		int i;
		for(i=0; i<s.size(); i++) {
			if(s[i]=='1')
				break;
		}
		int j;
		for(j=s.size(); j>=0; j--) {
			if(s[j]=='1')
				break;
		}
		for(int k=i; k<=j; k++) {
			if(s[k]=='0') cnt++;
		}
		cout<<cnt<<endl;
	}
}