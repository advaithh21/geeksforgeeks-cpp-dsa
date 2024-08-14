//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int gcd(int a, int b){
	    if (b==0){
	        return a;
	    }
	    return gcd(b, a%b);
	}
	vector<int>LargestFraction(int n, int d){
	    int MAX = 10000;
	    int maxnum = -1, maxdem = 1, numerator;
	    for (int denominator = MAX; denominator>=1; denominator--){
	        numerator= (n*denominator -1)/d;
	        if ((gcd(numerator, denominator)==1) && (numerator*maxdem>=denominator*maxnum)){
	            maxnum = numerator;
	            maxdem = denominator;
	        }
	    }
	    vector<int> fraction = {maxnum, maxdem};
	    return fraction;
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, d;
		cin >> n >> d;
		Solution ob;
		vector<int>ans = ob.LargestFraction(n, d);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends