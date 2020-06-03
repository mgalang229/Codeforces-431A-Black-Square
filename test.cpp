#include <bits/stdc++.h>

using namespace std;

const int mxN=1e5;
int a[mxN], sum=0;
string s;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	for(int i=0; i<4; i++){
		cin >> a[i];
	}
	cin.ignore();
	getline(cin, s);
	for(int i=0; i<(int)s.size(); i++){
		if(s[i]=='1') sum+=a[0];
		else if(s[i]=='2') sum+=a[1];
		else if(s[i]=='3') sum+=a[2];
		else if(s[i]=='4') sum+=a[3];
	}
	cout << sum << "\n";
	return 0;
}
