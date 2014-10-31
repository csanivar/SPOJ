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

void solve(int n[],int t){
	int avg = 0,sum = 0;
	int ans = -1;
	for(int i=0;i<t;i++){
		sum+=n[i];
	}
	avg = sum/t;
	if(sum%t!=0){
	 ans = -1;
	}
	else{
		ans = 0;
		for(int i=0;i<t;i++){
			if(n[i]>avg) ans+= n[i] - avg;
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	while(cin>>t && t!=-1){
		int n[t];
		memset(n,0,sizeof(n));
		for(int i=0;i<t;i++) cin>>n[i];
		solve(n,t);
	}
}