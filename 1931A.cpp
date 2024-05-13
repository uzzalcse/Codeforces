


#include <iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    
    while(t--) {
        int n; cin>>n;
        if(n>28 && n<=53) {
            char s=n+96-27;
            cout<<'a'<<s<<'z'<<endl;
        }
        else if(n>53) {
            char s=n+96-52;
            cout<<s<<'z'<<'z'<<endl;
        }
        else {
            char s = n+96-2;
            cout<<'a'<<'a'<<s<<endl;
        }
    }

    return 0;
}