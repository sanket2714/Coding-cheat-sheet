/*
  time: O(n)
  space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

string pairSum(int arr[], int n,int sum){
    unordered_set<int> s;
    int temp;
    for(int i=0;i<n;i++){
        temp = sum - arr[i];
        if(s.find(temp) != s.end()){
            cout<<temp<<" "<<arr[i]<<" ";
            return "Yes";
        }
        s.insert(arr[i]);
    }
    return "No";
}

int main() {
	long long t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    cout<<pairSum(arr,n,sum)<<endl;
	}
	return 0;
}
