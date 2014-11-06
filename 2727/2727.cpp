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

string solve(vector<int> g_army,vector<int> mg_army){
	int ng = g_army.size();
	int nm = mg_army.size();
	sort(g_army.begin(),g_army.end());
	sort(mg_army.begin(),mg_army.end());
	int i=0,j=0;
	while(1){
		if(g_army[i]<mg_army[j]) i++;
		else j++;
		if(i==ng) return "MechaGodzilla";
		else if(j==nm) return "Godzilla";
	}
	return "Uncertain";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		getline(cin,s);
		int ng,nm;
		cin>>ng>>nm;
		vector<int> g_army,mg_army;
		for(int i=0;i<ng;i++){
			int temp;
			cin>>temp;
			g_army.push_back(temp);
		}
		for(int i=0;i<nm;i++){
			int temp;
			cin>>temp;
			mg_army.push_back(temp);
		}
		cout<<solve(g_army,mg_army)<<endl;
	}
}