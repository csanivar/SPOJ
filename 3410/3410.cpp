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

int solve(int n){
	long long ans = 0;
	while(n!=0){
		ans+= n*n;
		n--;
	}
	return ans;
}

int main(){
	int t;
	while(cin>>t && t!=0){
		cout<<solve(t)<<endl;
	}
}