#include<map>
#include<vector>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int a;
	    cin>>a;
	    int arr[a];
	    for(int i=0;i<a;i++) cin>>arr[i];
	    map<int, pair<int,int> > freqarr;
	    int nextnum=1;
	    vector<int> ans;
	    for(int i=0;i<a;i++) {
	        if(freqarr.find(arr[i])!=freqarr.end()) {
	            if(freqarr[arr[i]].second>0) {
	                ans.push_back(freqarr[arr[i]].first);
	                freqarr[arr[i]].second--;
	                if(freqarr[arr[i]].second==0) freqarr.erase(arr[i]);
	            }
	        }
	        else {
	            freqarr[arr[i]] ={nextnum,arr[i]-1};
	        if(freqarr[arr[i]].second==0) freqarr.erase(arr[i]);
	        ans.push_back(nextnum);
	        nextnum++;
	    }
        }
	    bool flag=1;
	    for(auto i: freqarr) {
	        if(i.second.second>0) {
	            flag=0;
	            break;
	        }
        }
	        if(flag==0) cout<<-1;
	        else {
	            for (auto i:ans) cout<<i<<" ";
	        }
	        cout<<endl;
	
	}
	return 0;
}
