//Given a string, Your task is to? complete the function encode that returns the run length encoded string for the given string. 

#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}


/*You are required to complete this function */

string encode(string s)
{     
  //Your code here 
  string ans="";
  int i=0,j=0;
  while(j<s.length()){
      while(s[i]==s[j]){
          j++;
      }
      ans+=s[i] + to_string(j-i);
      i=j;
  }
  return ans;
}     
 
