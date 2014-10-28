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

vector<int> multiply(vector<int> a,int num){
	int temp = 0;
	int size = a.size();
	for(int i=0;i<size;i++){
		int x = a[i]*num + temp;
		a[i] = x%10;
		temp = x/10;
	}
	while(temp!=0){
		a.push_back(temp%10);
		temp = temp/10;
	}
	return a;
}

void solve(int n){
	vector<int> ans;
	ans.push_back(1);
	for(int i=1;i<=n;i++){
		ans = multiply(ans,i);
	}
	int size = ans.size();
	for(int i=0;i<size;i++){
		cout<<ans[size-i-1];
	}
	cout<<endl; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		solve(num);	
	}
}