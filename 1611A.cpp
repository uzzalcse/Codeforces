
#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		string s; cin>>s; bool check=true;
		int firstdigit=s[0]-'0';
		int lastdigit=s[s.size()-1]-'0';
		if(lastdigit%2==0)
			cout<<0<<endl;
		else if(firstdigit%2==0)
			cout<<1<<endl;
		else {
			for(int i=0; i<s.size(); i++) {
				int d=s[i]-'0';
				if(d%2==0) {
					check=false;
					cout<<2<<endl; break;
				}
			}
			if(check)
				cout<<-1<<endl;
		}		
	}
}