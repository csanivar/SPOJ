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

typedef long long ll;

using namespace std;

void solve(vector<int> input,int max){
	vector<ll> results;
	ll i =0;
	while(1){
		results.push_back(i+192);
		results.push_back(i+442);
		results.push_back(i+692);
		results.push_back(i+942);
		if(results.size()>max) break;
		i+=1000;
	}
	for(int i=0;i<input.size();i++){
		cout<<results[input[i]-1]<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	/*vector<int> input;
	int max = 0;
	while(t--){
		int n;
		cin>>n; 
		if(max<n) max = n;
		input.push_back(n);
	}
	solve(input,max); */
	ll num,ans;
	while(t--){
		scanf("%lld",&num);
		ans = (num-1)*250 + 192;
		printf("%lld\n",ans);
	}
}