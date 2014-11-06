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

int solve(string s){
	vector<int> sd_values;
	vector<int> dd_values;
	sd_values.push_back(1);
	sd_values.push_back(1);
	dd_values.push_back(0);
	dd_values.push_back(0);
	for(int i=1;i<s.length();i++){
		int sd = s[i] - '0';
		int dd = (s[i-1]-'0')*10 + sd;
		if(dd==sd){
			sd_values.push_back(sd_values[i]+dd_values[i]);
			dd_values.push_back(0);
		}
		else if(dd<=26 && sd !=0){
			sd_values.push_back(sd_values[i]+dd_values[i]);
			dd_values.push_back(sd_values[i]);
		}
		else if(dd<=26 && sd==0){
			sd_values.push_back(0);
			dd_values.push_back(sd_values[i]);
		}
		else if(dd>26 && sd==0) return 0;
		else if(dd>26 && sd!=0){
			sd_values.push_back(sd_values[i]+dd_values[i]);
			dd_values.push_back(0);
		}
		//cout<<"sd "<<sd<<" dd "<<dd<<endl;
		//cout<<"sd_values[i] "<<sd_values[i]<<" dd_values[i] "<<dd_values[i]<<endl;
	}
	return sd_values[s.length()]+dd_values[s.length()];
}

int main(){
	string s;
	while(cin>>s){
		if(s.length()==1 && s[0]=='0') break;
		if(s[0]=='0') cout<<0<<endl;
		else cout<<solve(s)<<endl;
	}
}