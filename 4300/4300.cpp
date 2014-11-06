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

using namespace std;

void solve(int num){
	vector<int> factors;
	factors.push_back(0);
	int ans = 0;
	for(int i=1;i<=num;i++){
		if(factors[factors.size()-1]==i) break;
		int quo = num/i;
		if(num%i==0) factors.push_back(i);
		int diff = quo - i + 1;
		if(diff>0) ans += diff;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	solve(t);
}