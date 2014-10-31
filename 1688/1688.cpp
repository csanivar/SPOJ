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
#include <bitset>

using namespace std;

string solve(int n){
	string s = "";
	bitset<16> a = n;
	for(int i=15;i>=0;i--){
		if(a[i]==1){
			if(i==0) {
				if(s!="") s = s + "+2(0)";
				else s = s + "2(0)";
			}
			else if(i==1) {
				if(s=="") s = s + "2";
				else s = s + "+2";
			}
			else{
				if(s!="") s = s +"+2("+solve(i)+")";
				else s = s + "2("+solve(i)+")";
			}
		}
	}
	return s;
}

int main(){
	int input[] = {137,1315,73,136,255,1384,16385};
	int len = sizeof(input)/sizeof(input[0]);
	for(int i=0;i<len;i++){
		cout<<input[i]<<"="<<solve(input[i])<<endl;
	}
}