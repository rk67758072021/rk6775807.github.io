#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int l,r;
	    cin>>l>>r;
	    int count=0;
	    for(int i=l;i<=r;i++) {
	        for(int j=i;j<=r;j++) {
	           count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
