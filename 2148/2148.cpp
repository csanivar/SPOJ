#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <ctime>
#include <map>
#include <set>
#include <cassert>
#include <cstdio>
#include <string>

typedef long long ll;

using namespace std;

void solve(vector<ll> a,ll n){
	vector<ll> rem;
	for(ll i=0;i<n;i++){
		rem.push_back(a[i]%n);
	}
	ll sum = 0;
	for(ll i=0;i<n;i++){
		sum += rem[i];
	}
	if(sum%n==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

ll convertToInt(string s){
	int len = s.length();
	ll ans = 0;
	for(int i=0;i<len;i++){
		ans = (ans<<3) + (ans<<1) + s[i] - '0';
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<ll> a;
		ll n = 0;
		string s;
		getline(cin,s);
		getline(cin,s);
		while(getline(cin,s) && s!=""){
			ll temp = convertToInt(s);
			a.push_back(temp);
			n++;
		}
		solve(a,n);
	}
}