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
#include <cmath>

typedef long long ll;

using namespace std;

int solve(vector<int> values,int total){
	int no_of_frnds = values.size();
	sort(values.begin(),values.end());
	int sum = 0;
	int ans = 0;
	for(int i=0;i<no_of_frnds;i++){
		sum += values[no_of_frnds - i - 1];
		ans++;
		if(sum>=total) break;
	}
	if(ans==no_of_frnds && sum<total) return 0;
	else return ans;
}

int main(){
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
		int total,no_of_frnds;
		cin>>total>>no_of_frnds;
		vector<int> values;
		for(int i=0;i<no_of_frnds;i++){
			int temp;
			cin>>temp;
			values.push_back(temp);
		}
		int ans = solve(values,total);
		if(ans!=0) cout<<"Scenario #"<<j+1<<":\n"<<ans<<endl<<endl;
		else cout<<"Scenario #"<<j+1<<":\n"<<"impossible"<<endl<<endl;
	}
}