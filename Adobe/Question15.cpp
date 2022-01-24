//Given two library versions of an executable: for example, “10.1.1.3” and “10.1.1.9” or “10” and “10.1”. 
//Find out which one is more recent? Strings can be empty also.

#include<bits/stdc++.h>
using namespace std;

string latest_version(string s1 , string s2){

    if(s1 == "")
    return s2;
    if(s2 == "")
    return s1;

    int a = s1.size();
    int b = s2.size();
    int x = min(a,b);
    for(int i=0 ; i<x ;i++){

        if(s1[i] == '.')
        continue;
        
        string a1 (1,s1[i]);
        string a2 (1,s2[i]);

        if(stoi(a1)>stoi(a2))
        return s1;
        else if(stoi(a1)<stoi(a2))
        return s2;
        else
        continue;
    }

    if(a >b)
    return s1;
    else
    return s2;
}

int main()
{
    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    string res = latest_version(s1,s2);

    cout<<res<<endl;

    return 0;
}
