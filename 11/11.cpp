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

int solve(int num){
	int a = 5;
	int ans = 0;
	while(num/a!=0){
		ans += num/a;
		a = a*5;
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		cout<<solve(num)<<endl;
	}
}