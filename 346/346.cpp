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

map<uint,ll> values;

long long max1(long long n1,long long n2){
	return ((n1>n2)?n1:n2);
}

long long maximum(ll n){
	if(n==0) return 0;
	ll h = values[n];
	if(h==0){
		h = max1(n,maximum(n/2)+maximum(n/3)+maximum(n/4));
		values[n] = h;
	}
	return h;
}

int main(){
	ll n;
	values.clear();
	while(cin>>n){
		cout<<maximum(n)<<endl;
	}
}