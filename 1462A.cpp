


#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int> seq1;
		for(int i=0; i<n; i++) {
			int a; cin>>a;
			seq1.push_back(a);
		}
		vector<int> seq2;
		int i;
		for(i=0; i<n/2; i++) {
			seq2.push_back(seq1[i]);
			seq2.push_back(seq1[n-i-1]);
		}
		if(n%2)
			seq2.push_back(seq1[i]);
		for(auto x: seq2) {
			cout<<x<<" ";
		}
		cout<<endl;
	}
}