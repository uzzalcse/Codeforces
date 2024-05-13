

#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int result=3*('A'+'B'+'C')+'?';
		for(int i=0; i<9; i++) {
			char ch; cin>>ch;
			result-=ch;
		}
		cout<<char(result)<<endl;
	}
}
