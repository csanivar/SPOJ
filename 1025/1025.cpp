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

void solve(int men[],int women[],int n){
	int sum = 0;
	sort(men,men+n);
	sort(women,women+n);
	for(int i=0;i<n;i++){
		sum = sum + men[i]*women[i];
	}
	cout<<sum<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int men[n],women[n];
		for(int i=0;i<n;i++) cin>>men[i];
		for(int i=0;i<n;i++) cin>>women[i];
		solve(men,women,n);
	}
}