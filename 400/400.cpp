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

void solve(int n,string s){
	int len = s.length();
	char ans[len];
	memset(ans,0,sizeof(ans));
	int mul = len/n;
	for(int i=0;i<len/n;i++){
		int k=0;
		if(i%2==0){
			for(int j=0;j<n;j++){
				ans[i+(mul*j)] = s[n*i+k];
				k++;
			}
		}
		else {
			for(int j=n-1;j>=0;j--){
				ans[i+(mul*j)] = s[n*i+k];
				k++;
			}
		}
	}
	for(int i=0;i<len;i++){
		cout<<ans[i];
	}
	cout<<endl;
}

int main(){
	int n;
	string s;
	while(cin>>n && n!=0){
		cin>>s;
		solve(n,s);
	}

}