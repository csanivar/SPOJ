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

int getInt(string s){
	size_t found = s.find("machula");
	if(found!=string::npos) return -1;
	else{
		int n=0;
		for(int i=0;i<s.length();i++){
			n = n*10 + s[i] - '0';
		}
		return n;
	}
}

void solve(string s){
	int p1,p2;
	int n1,n2,n3;
	for(int i=0;i<s.length();i++){
		if(s[i]=='+') p1 = i;
		if(s[i]=='=') p2 = i;
	}
	n1 = getInt(s.substr(0,p1-1));
	n2 = getInt(s.substr(p1+2,p2-p1-3));
	n3 = getInt(s.substr(p2+2,s.length()-p2-2));
	if(n1==-1) cout<<(n3-n2)<<" + "<<n2<<" = "<<n3<<endl;
	else if(n2==-1) cout<<n1<<" + "<<(n3-n1)<<" = "<<n3<<endl;
	else if(n3==-1) cout<<n1<<" + "<<n2<<" = "<<(n1+n2)<<endl;
	else cout<<n1<<" + "<<n2<<" = "<<n3<<endl;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		while(getline(cin,s)){
			if(s!="") break;
		}
		solve(s);
	}
}