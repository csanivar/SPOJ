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

void solve(float n){
	int ans = 0;
	float sum = 0.0;
	int i=2;
	while(1){
		sum = sum + (float)1/(ans+2);
		ans++;
		if(sum>=n) break;
	}
	cout<<ans<<" card(s)"<<endl;
}

int main(){
	float n;
	while(cin>>n && n!=0.00){
		solve(n);
	}
}