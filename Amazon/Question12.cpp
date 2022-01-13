//Column name from a given column number 

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans = "";
        while(n>0)
        {
            int k = (n-1)%26;
            ans = char(k + 'A') + ans;
            n = (n-1)/26;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends
