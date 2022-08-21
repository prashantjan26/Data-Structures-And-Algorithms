//Check whether a word is palindrome or not

// I/P: madam
// O/P: true

// I/P: adam
// O/P: false

#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s)
{
	if(i >= s.size()/2)
		return true;
	if(s[i] != s[s.size()-i-1])
		return false;
	return palindrome(i-1,s);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;
	cout<<palindrome(0,s);
	return 0;
}


// Time Complexity: O(n/2);
// Space Complexity: auxiliary space: O(n/2);