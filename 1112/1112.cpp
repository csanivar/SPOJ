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

bool exists(int x,int y){
	if(y==x || y==x-2) return true;
	else return false;
}

void solve(int x,int y){
	if(y%2==0){
		if(y==x) {
			cout<<(y*2)<<endl;
			return;
		}
		else if(y==x-2){
			cout<<(2 + (y*2))<<endl;
			return;
		}
	}
	else{
		if(y==x) {
			cout<<(y*2)-1<<endl;
			return;
		}
		else if(y==x-2){
			cout<<(2 + (y*2))-1<<endl;
			return;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if(exists(x,y)==false){
			cout<<"No Number"<<endl;
		}
		else{
			solve(x,y);
		}
	}
}